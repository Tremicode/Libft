NAME = libft.a
NAME_BONUS = .bonus
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rcs

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
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstmap_bonus.c

OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)


RM = rm -f

#esta es la funcion principal.
$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS) 
bonus: $(BOBJECTS) 
	@$(AR) $(ARFLAGS) $(NAME) $(BOBJECTS)

#compilamos la libreria.


%.o: %.c 
	$(CC) -c $(CFLAGS)  $< -o $@
#esto es el borrado de objetos
clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean 	
	$(RM) $(NAME) $(BOBJECTS)

#declaramos la variable para el comando clean.
all: $(NAME)
#borrado de ejecutable y los objetos.
re:	fclean all


.PHONY: bonus all clean fclean re
#sirve para indicar que no cree ningun archivo con estos nombres.

