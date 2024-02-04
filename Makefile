INCLUDE = libft.h
LIB = ar rcs
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
			ft_substr.c
			
			
#declaracion de variable con los archivos ejecutables.
OBJECTS = $(SOURCES:.c=.o)
#declaramos variables archivos objeto .c y .o.
CC = gcc 
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
#declaramos la variable para el comando clean.
all: $(NAME)
#esta es la funcion principal.
$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJECTS)
#compilamos la libreria.
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
#esto es el borrado de objetos
clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)
#borrado de los objetos y del ejecutable.
fclean: clean 	
	$(RM) $(NAME)
#borrado de ejecutable y los objetos.
re:	fclean all
#borrado de todo los bonus
.PHONY: bonus all clean fclean re
#sirve para indicar que no cree ningun archivo con estos nombres.

comprueba: 
	ar t $(NAME)
