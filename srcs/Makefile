# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 16:55:17 by hcremers          #+#    #+#              #
#    Updated: 2022/03/15 18:01:57 by hcremers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libsrcs.a

SRCS	= $(wildcard *.c)

OBJS	= $(addprefix $(OBJDIR), $(SRCS:.c=.o))
OBJDIR	= objs/

CC		= gcc
RM		= rm -f
MKDIR	= mkdir

CFLAGS	= -Wall -Wextra -Werror

###############################################################################

$(OBJDIR)%.o:	%.c
				$(CC) $(CFLAGS) -c $< -o $(addprefix $(OBJDIR), $(<:.c=.o))

all:			${NAME}

$(NAME):		$(OBJS)
				ar rcs ${NAME} $(OBJS)
				ranlib ${NAME}

$(OBJS):		| $(OBJDIR)

$(OBJDIR):
				$(MKDIR) $(OBJDIR)
clean:
				$(RM) $(wildcard *.o)
				$(RM) -r $(OBJDIR)

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re bonus