NAME = libftprintf.a
LIBFT_DIR = libft
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRC = ft_printf.c \
print_char.c \
print_string.c \
print_number.c \
print_unsigned.c \
print_hex.c \
print_pointer.c \
print_percent.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -c $(LIBFT_DIR)
	$(AR) $(NAME) $(OBJ) $(LIBFT_DIR)/libft.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -c $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -c $(LIBFT_DIR)

re: fclean all