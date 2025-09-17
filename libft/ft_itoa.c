#include "libft.h"



int counter(int number){
    long num = number;
    int counter =0;
    if(num < 0){
        counter ++;
        num = -num;
    }
    if(num == 0)
        counter++;
    while(num> 0){
        num/=10;
        counter++;
    }
    return counter;
}   


char* ft_itoa(int n){
    int size = counter(n);
   
    long num = n;
    char *ptr= malloc(sizeof(char) * (1 + size));
    if(!ptr)
       return NULL;

    if(num < 0){
        ptr[0] = '-';
        num= -num;
 
    }
    if(num == 0)
        ptr[0] = '0';
    ptr[size] = '\0';

      while(num>0){
          size--;
          ptr[size]= (num %10 ) +'0';
          num/=10;
      }
      return ptr;
}