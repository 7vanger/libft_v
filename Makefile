NAME = libft.a

arq.h = libft.h

arq.c = ft_isalnum.c ft_memchr.c ft_strchr.c ft_strnstr.c ft_isalpha.c\
ft_memcmp.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isascii.c ft_memcpy.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlen.c\
ft_toupper.c ft_calloc.c ft_isprint.c ft_memset.c ft_strncmp.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c

arq.o = $(arq.c:.c=.o)

comp = -c -Werror -Wall -Wextra -I $(arq.h)

all:$(NAME)

$(NAME):$(arq.o)
	ar rcs $(NAME) $(arq.o)

.c.o:
	${CC} $(comp) $< -o $(<:.c=.o)

clean:
	rm -f $(arq.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
