##
## Makefile for pushswap in /home/dubus_b/rendu/C_Prog_Elem/CPE_2015_Pushswap
## 
## Made by Benjamin Dubus
## Login   <dubus_b@epitech.net>
## 
## Started on  Sun Nov 22 14:01:30 2015 Benjamin Dubus
## Last update Sun Dec 20 22:12:11 2015 Benjamin Dubus
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Werror -Wextra -ansi -I include/

NAME	= bsq

SDIR	= source/

SRCS	= $(SDIR)fd.c            	\
	  $(SDIR)algo.c            	\
	  $(SDIR)cut.c            	\
	  $(SDIR)bsq.c            	\
	  $(SDIR)my_putchar_et.c        \
          $(SDIR)my_putchar.c           \
          $(SDIR)my_strlen.c            \
          $(SDIR)my_putstr.c            \
          $(SDIR)my_put_nbr.c           \
          $(SDIR)my_getnbr.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) 
clean:
	 $(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
