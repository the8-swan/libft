#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	char str[] = "hello wolrd!";

	write(1, str, strlen(str));
	int fd = open("test.c", O_RDWR);
	printf("fd = %d", fd);
	write(fd, str, strlen(str));	
}
