
NAME	= push_swap

SRC		= $(wildcard *.c)

OBJ		= $(addprefix $(OBJDIR), $(SRC:.c=.o))
OBJDIR	= objs/

UTLDIR	= libft/
LIB		= libutils.a

CC		= gcc
RM		= rm -f
MKDIR	= mkdir
ZIP		= zip
MV		= mv

CFLAGS	= -Wall -Wextra -Werror

ZIPNAME	= \[06\]push_swap
DISTANT	= /Volumes/Clémentine/19/

$(OBJDIR)%.o:	%.c
				$(CC) $(CFLAGS) -c $< -o $(addprefix $(OBJDIR), $(<:.c=.o))

all:			$(NAME)

$(NAME):		$(OBJ)
				make -C $(UTLDIR)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(UTLDIR)$(LIB)

$(OBJ):			| $(OBJDIR)

$(OBJDIR):		
				$(MKDIR) $(OBJDIR)

clean:
				make clean -C $(UTLDIR)
				$(RM) $(wildcard *.o)
				$(RM) -r $(OBJDIR)

fclean:			clean
				make fclean -C $(UTLDIR)
				$(RM) $(NAME)

re:				fclean all

zip:			fclean
				$(ZIP) $(ZIPNAME) $(wildcard ./*)

xport:			zip
				$(MV) $(ZIPNAME).zip $(DISTANT)

.PHONY:			all clean fclean re zip
