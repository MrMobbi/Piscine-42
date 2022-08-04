SRCS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS		= ${SRCS:.c=.o} 
INC			= includes
FLAGS		= -Wall -Werror -Wextra
LIB			= ar rc
CC			= gcc
RM			= rm -f
NAME		= libft.a

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}
		
all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
