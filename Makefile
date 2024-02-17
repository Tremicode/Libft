INCLUDE = libft.h
LIB = ar -rcs
NAME = libft.a
#este es nombre de nuestro ejecutable.
SOURCES = 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_memset.c \
			ft_memchr.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c  \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_strlcat.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strdup.c  \
			ft_strnstr.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
			
BSOURCES = 	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c 
#declaracion de variable con los archivos ejecutables.
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)
#declaramos variables archivos objeto .c y .o.
CC = gcc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

#esta es la funcion principal.
$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJECTS)
#compilamos la libreria.
bonus: $(BOBJECTS)
		$(LIB) $(NAME) $(BOBJECTS)
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
#esto es el borrado de objetos
clean:
	$(RM) $(OBJECTS) $(BOBJECTS)
#borrado de los objetos y del ejecutable.
fclean: clean 	
	$(RM) $(NAME) $(BOBJECTS)

#declaramos la variable para el comando clean.
all: $(NAME)
#borrado de ejecutable y los objetos.
re:	fclean all
#borrado de todo los bonus

.PHONY: bonus all clean fclean re
#sirve para indicar que no cree ningun archivo con estos nombres.

##comprueba: 
##	ar t $(NAME)
