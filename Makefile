CSRC			:=./src/ft_string/ft_strnstr.c\
./src/ft_string/ft_isdigit.c\
./src/ft_string/ft_atol.c\
./src/ft_string/ft_strlcpy.c\
./src/ft_string/ft_strlen.c\
./src/ft_string/ft_strnlen.c\
./src/ft_string/ft_strchr.c\
./src/ft_string/ft_strjoin.c\
./src/ft_string/ft_isascii.c\
./src/ft_string/ft_isprint.c\
./src/ft_string/ft_toupper.c\
./src/ft_string/ft_split.c\
./src/ft_string/ft_strrchr.c\
./src/ft_string/ft_isalpha.c\
./src/ft_string/ft_atoll.c\
./src/ft_string/ft_substr.c\
./src/ft_string/ft_strncmp.c\
./src/ft_string/ft_strcpy.c\
./src/ft_string/ft_strmapi.c\
./src/ft_string/ft_strtrim.c\
./src/ft_string/ft_islower.c\
./src/ft_string/ft_isupper.c\
./src/ft_string/ft_strlcat.c\
./src/ft_string/ft_trim_end.c\
./src/ft_string/ft_count_occ.c\
./src/ft_string/ft_strdup.c\
./src/ft_string/ft_atoi.c\
./src/ft_string/ft_trim_begin.c\
./src/ft_string/ft_isalnum.c\
./src/ft_string/ft_itoa.c\
./src/ft_string/ft_isspace.c\
./src/ft_string/ft_tolower.c\
./src/ft_string/ft_is_char_in.c\
./src/ft_io/ft_putstr_fd.c\
./src/ft_io/ft_putnbr.c\
./src/ft_io/ft_putnbr_fd.c\
./src/ft_io/ft_putendl.c\
./src/ft_io/ft_putendl_fd.c\
./src/ft_io/ft_putchar.c\
./src/ft_io/ft_read.c\
./src/ft_io/ft_putchar_fd.c\
./src/ft_io/ft_read_fd.c\
./src/ft_io/ft_putstr.c\
./src/ft_memory/ft_memcmp.c\
./src/ft_memory/ft_bzero.c\
./src/ft_memory/ft_memcpy.c\
./src/ft_memory/ft_memccpy.c\
./src/ft_memory/ft_realloc.c\
./src/ft_memory/ft_freea.c\
./src/ft_memory/ft_memchr.c\
./src/ft_memory/ft_memset.c\
./src/ft_memory/ft_memmove.c\
./src/ft_memory/ft_calloc.c\
./src/ft_memory/ft_numlen.c\
./src/ft_memory/ft_bytes_digits.c
BONUSSRC		:=./src_bonus/ft_list/ft_lstadd_back.c\
./src_bonus/ft_list/ft_lstnew.c\
./src_bonus/ft_list/ft_lstlast.c\
./src_bonus/ft_list/ft_lstclear.c\
./src_bonus/ft_list/ft_lstiter.c\
./src_bonus/ft_list/ft_lstmap.c\
./src_bonus/ft_list/ft_lstsize.c\
./src_bonus/ft_list/ft_lstadd_front.c\
./src_bonus/ft_list/ft_lstdelone.c

NAME		:= libft.a
DEBUG		:= 0
BONUSDIR	:= src_bonus

SRCDIR		?= src
BINDIR      ?= bin
TESTDIR     ?= test
NAME        ?= a.out
TEST        ?= test
DEBUG       ?= 1
RM          ?= /bin/rm -f
AR			?= ar
ARFLAGS		?= -rcs
CC          ?= gcc
CFLAGS      ?= -MMD -Werror -Wextra -Wall
INCDIR      ?= inc/
CSRC        ?=
COBJ        ?= $(patsubst %.c,%.o,$(subst $(SRCDIR),$(BINDIR),$(CSRC)))
BONUSOBJ    ?= $(patsubst %.c,%.o,$(subst $(BONUSDIR),$(BINDIR),$(BONUSSRC)))
CDF         ?= $(patsubst %.o,%.d,$(COBJ))
BONUSDF		?= $(patsubst %.o,%.d,$(BONUSOBJ))
DEBUG		?= 0
DEBUGFLAGS	?= -g -fsanitize=address -fno-omit-frame-pointer
INCDIR      := $(addprefix -I,$(INCDIR))
CFLAGS      := $(CFLAGS) $(INCDIR)
ifeq ($(DEBUG),1)
CFLAGS		+= $(DEBUGFLAGS)
endif

all:                        $(NAME)
clean:
		$(RM) $(COBJ) $(CDF) $(BONUSOBJ) $(BONUSDF) tags
fclean:
		$(RM) $(NAME)
re:
		fclean all
norme:
		norminette
bonus:						$(COBJ) $(BONUSOBJ)
		$(AR) $(ARFLAGS) $(NAME) $(COBJ) $(BONUSOBJ)
$(BINDIR)/%.o:				$(BONUSDIR)/%.c
		$(CC) $(CFLAGS)			-c		$< -o					$@
$(BINDIR)/%.o:				$(SRCDIR)/%.c
		$(CC) $(CFLAGS)			-c		$< -o					$@
$(NAME):					$(COBJ)
		$(AR) $(ARFLAGS) $(NAME) $(COBJ)
.PHONY:
		all fclean clean re bonus
