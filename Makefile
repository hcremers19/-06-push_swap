# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 16:37:09 by hcremers          #+#    #+#              #
#    Updated: 2022/03/15 18:03:27 by hcremers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
ZIPNAME	= \[06\]push_swap.zip

SRC		= main.c \

OBJ		= $(addprefix $(OBJDIR), $(SRC:.c=.o))
OBJDIR	= objs/

LIB		= srcs/libsrcs.a

DISTANT	= /Volumes/Clémentine/19/

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc
RM		= rm -f
MKDIR	= mkdir
ZIP		= zip
MV		= mv

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

zip:			fclean
				$(ZIP) $(ZIPNAME) $(wildcard ./*)

xport:			zip
				$(MV) $(ZIPNAME) $(DISTANT)

.PHONY:			all clean fclean re zip