src = *.c ./ft_printf/*.c ./Libft/*.c
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
CC = cc

all : push_swap
	
$(NAME): $(src)	
	@$(CC) $(FLAGS) $(src) -o$(NAME) 

clean :
	@rm -f $(NAME)

fclean : clean

re: fclean all