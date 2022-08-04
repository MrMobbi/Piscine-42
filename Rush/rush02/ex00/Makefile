SRCS	= main.c ft_atribute_numbers.c ft_find_and_count.c ft_print.c algo.c ft_arglen.c ft_sortchain.c ft_sort_index.c	

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME} 

.PHONY:		clean all fclean
