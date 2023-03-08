#include <stdio.h>

int increment(int x);

int number = 12; // global variable

int main(void) { // corrected main function syntax
    int i, x = 2; // declared i and x as separate variables and initialized x to 2
    for (i = 0; i < 3; i++) {
        increment(x);
    }
    printf("number from main is %i\n", number); 
    printf("x from main is %i\n", x); // corrected printf syntax

    number = increment(x);
    printf("number after call to increment is %i\n", number); // corrected printf syntax
    printf("x after call to increment is %i\n", x); // corrected printf syntax

    return 0;
}

int increment(int x) {
    static int number = 0;
    number++;
    x += 5;
    printf("number in increment is %i\n", number); // corrected printf syntax
    printf("x in increment is %i\n", x); // corrected printf syntax
    return number;
}