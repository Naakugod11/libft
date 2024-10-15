CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a
OBJS = ft_atoi.o \
	ft_bzero.o  \
	ft_calloc.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_memset.o \
	ft_strchr.o \
	ft_strdup.o \
	ft_strlcat.o \
	ft_strlcpy.o \
	ft_strlen.o \
	ft_strncmp.o \
	ft_strnstr.o \
	ft_strrchr.o \
	ft_tolower.o \
	ft_toupper.o \
	ft_substr.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_split.o \
	ft_itoa.o \

HDRS = libft.h

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(HDRS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)