NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

BSRC = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c

BOBJ = $(BSRC:.c=.o)

# %.o : %.c
# 	cc $(CFLAGS) -c $^

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	cc $(CFLAGS) -c $(SRC)

bonus : $(BOBJ)

$(BOBJ) : $(BSRC)
	cc $(CFLAGS) -c $(BSRC)
	ar -rc $(NAME) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
