/*1. Write a function to compute the square of a number.*/
#include <stdio.h>
 
int square(int num) {
    return num * num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The square of %d is %d\n", number, square(number));
    return 0;
}