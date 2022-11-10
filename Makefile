# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 16:37:09 by hcremers          #+#    #+#              #
#    Updated: 2022/11/10 11:37:37 by hcremers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRC		= main.c \

OBJ		= $(addprefix $(OBJDIR), $(SRC:.c=.o))
OBJDIR	= objs/

LIB		= srcs/libsrcs.a

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc
RM		= rm -f
MKDIR	= mkdir

###############################################################################

$(OBJDIR)%.o:	%.c
				$(CC) $(CFLAGS) -c $< -o $(addprefix $(OBJDIR), $(<:.c=.o))

all:			$(NAME)

$(NAME):		$(OBJ)
				make -C srcs/
				$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

$(OBJ):			| $(OBJDIR)

$(OBJDIR):
				$(MKDIR) $(OBJDIR)

clean:
				make clean -C srcs/
				$(RM) $(wildcard *.o)
				$(RM) -r $(OBJDIR)

fclean:			clean
				make fclean -C srcs/
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re 