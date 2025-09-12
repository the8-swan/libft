MY_FLAGS= -Wall -Werror -Wextra
files = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_strlcpy.o ft_bzero.o ft_tolower.o ft_memcpy.o ft_strlen.o ft_toupper.o ft_memset.o ft_isascii.o ft_isprint.o main.o

main: $(files)
	gcc $(MY_FLAGS) $(files) -o main


%.o : %.c
	gcc $(MY_FLAGS) -c $<


clean : 
	rm -f *.o main