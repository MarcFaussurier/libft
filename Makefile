CSRC			:=./ft_strnstr.c\
./ft_isdigit.c\
./ft_strlcpy.c\
./ft_strlen.c\
./ft_strnlen.c\
./ft_strchr.c\
./ft_strjoin.c\
./ft_isascii.c\
./ft_isprint.c\
./ft_toupper.c\
./ft_split.c\
./ft_strrchr.c\
./ft_isalpha.c\
./ft_substr.c\
./ft_strncmp.c\
./ft_strcpy.c\
./ft_strmapi.c\
./ft_strtrim.c\
./ft_islower.c\
./ft_isupper.c\
./ft_strlcat.c\
./ft_trim_end.c\
./ft_count_occ.c\
./ft_strdup.c\
./ft_atoi.c\
./ft_trim_begin.c\
./ft_isalnum.c\
./ft_itoa.c\
./ft_isspace.c\
./ft_tolower.c\
./ft_is_char_in.c\
./ft_putstr_fd.c\
./ft_putnbr.c\
./ft_putnbr_fd.c\
./ft_putendl.c\
./ft_putendl_fd.c\
./ft_putchar.c\
./ft_read.c\
./ft_putchar_fd.c\
./ft_read_fd.c\
./ft_putstr.c\
./ft_memcmp.c\
./ft_bzero.c\
./ft_memcpy.c\
./ft_memccpy.c\
./ft_realloc.c\
./ft_freea.c\
./ft_memchr.c\
./ft_memset.c\
./ft_memmove.c\
./ft_calloc.c\
./ft_numlen.c\
./ft_bytes_digits.c
BONUSSRC		:=./ft_lstadd_back.c\
./ft_lstnew.c\
./ft_lstlast.c\
./ft_lstclear.c\
./ft_lstiter.c\
./ft_lstmap.c\
./ft_lstsize.c\
./ft_lstadd_front.c\
./ft_lstdelone.c
NAME		:= libft.a
DEBUG		:= 0
BONUSDIR	:= ./
RM			:= rm -rf
SRCDIR		?= ./
BINDIR		?= bin/
NAME		?= a.out
DEBUG		?= 1
RM			?= /bin/rm -f
AR			?= ar
ARFLAGS		?= -rcs
CC			?= gcc
CFLAGS		?= -MMD -Werror -Wextra -Wall
INCDIR		?= inc/
CSRC		?=
COBJ		?= $(patsubst %.c,%.o,$(subst $(SRCDIR),$(BINDIR),$(CSRC)))
BONUSOBJ	?= $(patsubst %.c,%.o,$(subst $(BONUSDIR),$(BINDIR),$(BONUSSRC)))
CDF			?= $(patsubst %.o,%.d,$(COBJ))
BONUSDF		?= $(patsubst %.o,%.d,$(BONUSOBJ))
DEBUG		?= 0
DEBUGFLAGS	?= -g -fsanitize=address -fno-omit-frame-pointer
INCDIR		:= $(addprefix -I,$(INCDIR))
CFLAGS		:= $(CFLAGS) $(INCDIR)
ifeq ($(DEBUG),1)
CFLAGS		+= $(DEBUGFLAGS)
endif

all:						$(NAME)
mkbin:
		mkdir -p $(BINDIR)
clean:
		$(RM) $(COBJ) $(CDF) $(BONUSOBJ) $(BONUSDF) $(BINDIR) tags
fclean:						clean
		$(RM) $(NAME)
re:
		fclean all
norme:
		norminette
bonus:						mkbin $(COBJ) $(BONUSOBJ)
		$(AR) $(ARFLAGS) $(NAME) $(COBJ) $(BONUSOBJ)
$(BINDIR)%.o:				$(BONUSDIR)%.c
		$(CC) $(CFLAGS)			-c		$< -o					$@
$(BINDIR)%.o:				$(SRCDIR)%.c
		$(CC) $(CFLAGS)			-c		$< -o					$@
$(NAME):				mkbin	$(COBJ)
		$(AR) $(ARFLAGS) $(NAME) $(COBJ)
.PHONY:
		all fclean clean re bonus
