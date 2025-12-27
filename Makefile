NAME = push_swap

CC = cc
CFLAGS = -g -Wall -Wextra -Werror

FILES = lib_utlis/ft_atoi.c \
lib_utlis/ft_split.c \
lib_utlis/ft_strdup.c \
lib_utlis/ft_strlen.c \
lib_utlis/ft_substr.c \
operations/push.c \
operations/reverse_rotate.c \
operations/rotate.c \
operations/swap.c \
sorts/sort_2.c \
sorts/sort_3.c \
sorts/sort_4.c \
sorts/sort_5.c \
free_split.c \
indexing.c \
main.c \
parsing.c \
push_swap.c \
stack_utils.c


F_OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME): $(F_OBJ)
	$(CC) $(CFLAGS) $(F_OBJ) -o	$@

clean :
		rm -f $(F_OBJ)
fclean : clean
		rm -f $(NAME) $(B_NAME)

re : fclean all

.PHONY : all bonus clean fclean re