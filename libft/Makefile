MY_FLAGS= -Wall -Werror -Wextra
files = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o main.o

main: $(files)
	gcc $(MY_FLAGS) $(files) -o main


%.o : %.c
	gcc $(MY_FLAGS) -c $<


clean : 
	rm -f *.o main