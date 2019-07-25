NAME = a.out
SRCS = ./srcs/main.c .srcs/ft_in_out.c ./srcs/ft_deep_find_search.ci \
	   ./srcs/precalcul.c ./srcs/ft_auxiliaires.c
OBJECTS = main.o ft_in_out.o ft_deep_find_search.o precalcul.o \
	ft_auxiliaires.o
CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJECTS)
	gcc $(CFLAGS) -o $(NAME) $(OBJECTS)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

main.o : ./srcs/main.c
	gcc $(CFLAGS) -I ./includes -c ./srcs/main.c
ft_in_out.o : ./srcs/ft_in_out.c
	gcc $(CFLAGS) -I ./includes -c ./srcs/ft_in_out.c
ft_deep_find_search.o : ./srcs/ft_deep_find_search.c
	gcc $(CFLAGS) -I ./includes -c ./srcs/ft_deep_find_search.c
precalcul.o : ./srcs/precalcul.c
	gcc $(CFLAGS) -I ./includes -c ./srcs/precalcul.c
ft_auxiliaires.o : ./srcs/ft_auxiliaires.c
	gcc $(CFLAGS) -I ./includes/ -c ./srcs/ft_auxiliaires.c
