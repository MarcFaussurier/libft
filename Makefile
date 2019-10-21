# string variables
SRCDIR                                          := src#                 folder path
BINDIR                                          := bin#                 fodler path
TESTDIR                                         := test#                test path
NAME                                            := a.out#               compiled binary path (relative from project root)
TEST                                            := test#                test executable path (relative from project root/$BINPATH/$TESTPATH/)
TYPE                                            := executable#  executable, static or shared
DEBUG                                           := 1#                   0 or 1 switch
CXXENABLED                                      := 0#                   0 or 1 switch
# default toolchain
SHELL                                           := /bin/bash
RM                                                      := /bin/rm -f
AR                                                      := ar rcs
CC                                                      := gcc
CXX                                                     := g++
# default flags
CFLAGS                                          := -MMD -Werror -Wextra -Wall
CXXFLAGS                                        := -std=c++11 $(CFLAGS)
TESTFLAGS                                       := $(CXXFLAGS)
# array variables
INCDIR                                          := inc/
LIBPATH                                         :=# ./../../lib
LIBNAME                                         :=# foobar
# functions
define add_prefix
        $(shell echo "$(1)" | sed 's|[^ ]* *|$(2)&|g')
endef
define str_replace
        $(shell echo "$(1)" | sed 's|$(2)|$(3)|g')
endef
define find_by_ext
        $(shell find $(1) -type f -name "*.$(2)")
endef
define replace_ext
        $(patsubst %.$(1),%.$(2),$(3))
endef


# here you can overide default values set inside header.mk
# mimal example:
NAME		:= libft.a
TYPE		:= static
DEBUG		:= 0
TESTDIR		:= .misc/tests

ifeq ($(CSRC),)
        CSRC                                    := $(call find_by_ext,$(SRCDIR),c)
endif
ifeq ($(COBJ),)
        COBJ                                    := $(call replace_ext,c,o,$(call str_replace,$(CSRC),$(SRCDIR),$(BINDIR)))
        CDF                                             := $(call replace_ext,o,d,$(COBJ))
endif
ifeq ($(CXXSRC),)
        CXXSRC                                  := $(call find_by_ext,$(SRCDIR),cpp)
        CXXDF                                   := $(call replace_ext,o,d,$(COBJ))
endif
ifeq ($(CXXOBJ),)
        CXXOBJ                                  := $(call replace_ext,cpp,o,$(call str_replace,$(CXXSRC),$(SRCDIR),$(BINDIR)))
endif
ifeq ($(TESTSRC),)
        TESTSRC                                 := $(call find_by_ext,$(TESTDIR),cpp)
endif
ifeq ($(TESTOBJ),)
        TESTOBJ                                 := $(call replace_ext,cpp,o,$(call str_replace,$(TESTSRC),$(TESTDIR),$(BINDIR)/$(TESTDIR)))
        TESTDF                                  := $(call replace_ext,o,d,$(TESTOBJ))
endif
ifneq ($(LIBDIR),)
        LIBDIR                                  := $(call add_prefix,$(LIBDIR),-L)
endif
ifneq ($(LIBNAME),)
        LIBNAME                                 := $(call add_prefix,$(LIBNAME),-l)
endif
INCDIR                                          := $(call add_prefix,$(INCDIR),-I)
CXXFLAGS                                        := $(CXXFLAGS) $(INCDIR) $(LIBDIR) $(LIBNAME)
CFLAGS                                          := $(CFLAGS) $(INCDIR) $(LIBDIR) $(LIBNAME)
TESTFLAGS                                       := $(TESTFLAGS) $(INCDIR) $(LIBDIR) $(LIBNAME)
ifeq ($(DEBUG),1)
        CXXFLAGS                                += -g -fsanitize=address -fno-omit-frame-pointer
        CFLAGS                                  += -g -fsanitize=address -fno-omit-frame-pointer
endif

all:                                            $(NAME)

$(BINDIR)/%.o:                          $(SRCDIR)/%.c
        $(CC) $(CFLAGS)                 -c $< -o $@

$(BINDIR)/%.o:                          $(SRCDIR)/%.cpp
ifeq ($(CXXENABLED),1)
        $(CXX) $(CXXFLAGS)      -c $< -o $@
endif

$(BINDIR)/$(TESTDIR)/%.o:       $(TESTDIR)/%.cpp
        $(CXX) $(CXXFLAGS)      -c $< -o $@

$(NAME):                                        $(COBJ) $(CXXOBJ)
ifeq ($(TYPE),static)
ifeq ($(CXXENABLED),0)
        $(AR) $(NAME) $(COBJ)
endif
ifeq ($(CXXENABLED),1)
        $(AR) $(NAME) $(COBJ) $(CXXOBJ)
endif
endif
ifeq ($(TYPE),shared)
ifeq ($(CXXENABLED),0)
        $(CC) $(CFLAGS) -shared $(COBJ) -o $(NAME)
endif
ifeq ($(CXXENABLED),1)
        $(CXX) $(CXXFLAGS) -shared $(COBJ) $(CXXOBJ) -o $(NAME)
endif
endif
ifeq ($(TYPE),executable)
ifeq ($(CXXENABLED),0)
        $(CC) $(CFLAGS) $(COBJ) -o $(NAME)
endif
ifeq ($(CXXENABLED),1)
        $(CXX) $(CXXFLAGS) $(COBJ) $(CXXOBJ) -o $(NAME)
endif
endif

mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
current_dir := $(patsubst %/,%,$(dir $(mkfile_path)))

watch-compile:
        source $(current_dir)/watcher.sh "make" "$(SRCDIR)" "$(TESTDIR)"

watch-test:
        source $(current_dir)/watcher.sh "make test" "$(SRCDIR)" "$(TESTDIR)"

test:                                           $(COBJ) $(CXXOBJ) $(TESTOBJ)
        $(CXX) -o $(BINDIR)/$(TESTDIR)/$(TEST) $(COBJ) $(CXXOBJ) $(TESTOBJ) $(CXXOBJ)
        ./$(BINDIR)/$(TESTDIR)/$(TEST)

clean:
        $(RM) $(COBJ) $(CXXOBJ) $(TESTOBJ) $(CDF) $(CXXDF) $(TESTDF)

fclean:
        $(RM) $(NAME) $(BINDIR)/$(TESTDIR)/$(TEST)

re:
        fclean all test

.PHONY:
        all fclean clean re test

#install:
#	./.misc/install.sh

norme:
	norminette

release:
	./.misc/release.sh
