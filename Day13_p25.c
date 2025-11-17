/*
25.Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


*/
#include <stdio.h>

int main(){
    char choice;
    float a,b;
    printf("Enter  a number: = \n");
    printf("Enter b number = \n");
    scanf(" %f %f",&a,&b);
    printf("choice = ");
    scanf(" %c",&choice);
   switch ( choice)
   {
   case '+':
    printf("sum: %.2f\n", a + b);
    break;
   case '-':
    printf("sub: %.2f\n", a - b);
    break;
   case '*':
    printf("mut: %.2f\n", a * b);
    break;
   case '/':
    printf("div: %.2f\n", a / b);
    break;
   case '%':
    printf("percentage: %.2f\n", (int)a % (int)b);
    break;
   default:
   printf("Invalid operation\n");
    break;
   }
    return 0;
}