/*Write a program to input two numbers and display their sum.*/


// #include <stdio.h>

// int main(){
//     int a, b, sum;
//     printf("Enter the first number = ");
//     scanf("%d", &a);
//     printf("Enter the second number = ");
//     scanf("%d",&b);
//     sum = a + b;
//     printf("Sum of  = %d",sum);
//     return 0;
// }


/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include <stdio.h>

int main(){
    int a ,b;
    printf("Enter the first number =");
    scanf("%d",&a);
    printf("Enter the second number =");
    scanf("%d",&b);
    int sum = a + b;
    printf("sum of number =%d\n",sum);
    int sub = a-b;
    printf("sub of number =%d\n",sub);
    int mutl = a*b;
    printf("mutl of number =%d\n",mutl);
    int div = a / b;
    printf("Div of number =%d\n",div);

    return 0;
}