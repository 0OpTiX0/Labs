#include <stdio.h>

void increment(int i, int *pi);

int main(void){
    int i;
    int *pi;
    int a = 1, b = 2;
    printf("a is %d, *pi is %d \n", i, *pi);
    increment(a,&b);
    printf("a is %d, *pi is %d \n", a,b);

    return 0;
}


void increment(int i, int *pi){
i = i + 1;
*pi = *pi + 1;
printf("i is %d, *pi is %d \n", i, pi);
}