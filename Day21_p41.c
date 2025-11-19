/*Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    lastDigit = temp % 10;

    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;


    digits = (int)log10(num);

    if (num < 10) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    swappedNum = lastDigit * pow(10, digits)  
               + (num % (int)pow(10, digits)) / 10 * 10  
               + firstDigit; 
    printf("Swapped number = %d\n", swappedNum);

    return 0;
}

