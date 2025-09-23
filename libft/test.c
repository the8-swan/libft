#include <stdio.h>
#include <unistd.h>

int sum(int a , int b){
    return a+b;
}

int main(){
    int a =5;
    int b =6;
    printf("%p\n",sum);
    printf("%p\n",&a);
    printf("%p\n",&b);

    sleep(1000);
}