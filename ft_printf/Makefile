# **************************************************************************** #
#                                PROJECT CONFIG                                #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

# **************************************************************************** #
#                                 SOURCE FILES                                 #
# **************************************************************************** #

SRCS		= ft_printf.c \
			  ft_printf_puthex.c \
			  ft_printf_putnbr.c \
			  ft_printf_putptr.c \
			  ft_printf_putunbr.c

# **************************************************************************** #
#                                 OBJECT FILES                                 #
# **************************************************************************** #

OBJS		= $(SRCS:.c=.o)

# **************************************************************************** #
#                                   TARGETS                                    #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
