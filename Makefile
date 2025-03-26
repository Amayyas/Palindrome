##
## EPITECH PROJECT, 2025
## SYN Palindrome
## File description:
## Makefile for palindrome project
##

NAME	=	palindrome

SRCS	=	src/help.c	\
		src/main.c	\
		src/params.c	\
		src/parse_flags.c	\
		src/parser.c	\
		src/util.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
