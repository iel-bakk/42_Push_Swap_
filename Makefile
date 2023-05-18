SRC = 	push_first.c \
		push_second.c \
		push_third.c \
		push_four.c \
		push_fifth.c \
		push_sixth.c \
		push_seventh.c \
		push_eight.c \
		push_nine.c \
		push_tenth.c \
		push_swap.c

HEADER = push_swap.h

NAME = push_swap
		
CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	${CC} $(CFLAGS) $(OBJ) -o ${NAME}

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all