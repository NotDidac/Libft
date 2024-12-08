NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@echo "Making library, please wait a few seconds..."
	@ar rcs $(NAME) $(OBJ)
	@echo "(•̀ᴗ•́)\n$(NAME) generated!\n"

%.o: %.c $(HEADER)
	@echo "Compiling $<..."
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$@ generated!"


clean:
	@rm -f $(OBJ)
	@echo "\nRemoved $(OBJ) object files.\n"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed!\n"

re: fclean $(NAME)

.PHONY: all $(NAME) clean fclean re
