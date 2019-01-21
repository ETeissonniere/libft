CC      ?= gcc
AR      ?= ar
RANLIB  ?= ranlib
RM      ?= rm -rf

CFLAGS  += -Wall -Werror -Wextra -ansi -pedantic
NAME     = libft.a

SOURCES = \
		  srcs/memory/ft_memset.c   \
		  srcs/memory/ft_bzero.c    \
		  srcs/memory/ft_memcpy.c   \
		  srcs/memory/ft_memccpy.c  \
		  srcs/memory/ft_memmove.c  \
		  srcs/memory/ft_memchr.c   \
		  srcs/memory/ft_memcmp.c   \
		  srcs/strings/ft_strlen.c  \
		  srcs/strings/ft_strdup.c  \
		  srcs/strings/ft_strcpy.c  \
		  srcs/strings/ft_strncpy.c \
		  srcs/strings/ft_strcat.c  \
		  srcs/strings/ft_strncat.c \
		  srcs/strings/ft_strlcat.c \
		  srcs/strings/ft_strchr.c  \
		  srcs/strings/ft_strrchr.c \
		  srcs/strings/ft_strstr.c  \
		  srcs/strings/ft_strnstr.c \
		  srcs/strings/ft_strcmp.c  \
		  srcs/strings/ft_strncmp.c \
		  srcs/strings/ft_isalpha.c \
		  srcs/strings/ft_isdigit.c \
		  srcs/strings/ft_isalnum.c \
		  srcs/strings/ft_isascii.c \
		  srcs/strings/ft_isprint.c \
		  srcs/strings/ft_toupper.c \
		  srcs/strings/ft_tolower.c \
		  srcs/numbers/ft_atoi.c
OBJECTS = $(SOURCES:.c=.o)

HEADERS = includes

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADERS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(AR) rcs $(NAME) $(OBJECTS)
	$(RANLIB) $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

all:
	@make $(NAME)
