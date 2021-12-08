NAME 	= test

PATH	= ../

SRCS	= tests.c

OBJS	= ${SRCS:.c=.o}

CFLAGS	= -Wall -Wextra -Werror -g3 -fsanitize=address

LIB		= -L${PATH} -lftprintf

OUT 	= out00 out01

all:		${NAME}

${NAME}:	${OBJS}
			make -C ${PATH}
			gcc ${CFLAGS} ${OBJS} -o ${TEST} -L. -lftprintf 
			./${NAME} > file
			gcsplit file -f out --suppress-matched '/zelda/' 
			diff -a ${OUT}

.c.o:			
			gcc ${CFLAGS} -I${HEADERS} -c $< -o ${<:.c=.o}

clean:		
			rm -f ${OBJS}
			rm -f ${OUT}
			make -C ${PATH} clean

fclean:		clean
			rm -f ${NAME}
			make -C ${PATH} fclean

re:			fclean all

norm:	
			norminette -R CheckSourceHeader ${SRCS} 
			norminette -R CheckDefine ${HEADERS}

check:		 norm test

.PHONY :	all clean fclean re
