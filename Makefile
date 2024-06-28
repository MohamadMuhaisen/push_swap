NAME            = push_swap

CC              = gcc
CFLAGS          = -Wall -Wextra -Werror
RM              = rm -rf

SRC             = push_swap linkedlist operations
SRCS            = $(addsuffix .c, $(SRC))

OBJ_DIR         = obj
OBJS            = $(SRCS:%.c=$(OBJ_DIR)/%.o)

PRINTF_PATH     = ./ft_printf
LIBFT           = $(PRINTF_PATH)/libftprintf.a

$(OBJ_DIR)/%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

all:            $(NAME)

$(NAME):        $(LIBFT) $(OBJ_DIR) $(OBJS)
				$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
				make -C $(PRINTF_PATH)

$(OBJ_DIR):
				mkdir -p $(OBJ_DIR)

clean:
				make -C $(PRINTF_PATH) clean
				$(RM) $(OBJ_DIR)

fclean:         clean
				make -C $(PRINTF_PATH) fclean
				$(RM) $(NAME)

re:             fclean all

.PHONY:         all bonus clean fclean re libft