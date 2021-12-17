# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcremers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/28 14:25:14 by hcremers          #+#    #+#              #
#    Updated: 2021/07/28 14:25:18 by hcremers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libutils.a

SCRS	= ft_atoi.c ft_isdigit.c

OBJS	= $(addprefix $(OBJDIR), $(SCRS:.c=.o))
OBJDIR	= objs/

CC		= gcc
RM		= rm -f
MKDIR	= mkdir
RC		= ar rcs

CFLAGS	= -Wall -Wextra -Werror

$(OBJDIR)%.o:	%.c
				$(CC) $(CFLAGS) -c $< -o $(addprefix $(OBJDIR), $(<:.c=.o))

all:			$(NAME)

$(NAME):		$(OBJS)
				$(RC) $(NAME) $(OBJS)
				ranlib $(NAME)

$(OBJS):		| $(OBJDIR)

$(OBJDIR):		
				$(MKDIR) $(OBJDIR)

clean:
				$(RM) $(wildcard *.o)
				$(RM) -r $(OBJDIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
