CC      ?= gcc
AR      ?= ar
RANLIB  ?= ranlib
RM      ?= rm -rf

CFLAGS  += -Wall -Werror -Wextra -ansi -pedantic
NAME     = libft.a

SOURCES = \
		  srcs/ft_memset.c
OBJECTS = $(SOURCES:.c=.o)

HEADERS = includes

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADERS) -fPIC -c -o $@ $<

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
