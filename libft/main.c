#include "libft.h"
#include <stdio.h>

#include <ctype.h>
#include <string.h>



int main(){
    int c[14] ;
    int d[14] ;
    ft_bzero(c,16);
    bzero(d,16);

    printf("%d\n",c[2]);
    printf("%d\n",d[2]);
}