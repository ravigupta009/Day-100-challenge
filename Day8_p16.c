#include<stdio.h>
int main(){
    int num,num1,num2;
    printf("Enter a number = ");
    scanf("%d", &num,&num1,&num2);
    if (num > num1 && num > num2)
    {
        printf("%d is the largest number. ", num);
    }
    if (num2 > num && num2 > num1)
    {
        printf("%d is the largest number. ", num2);
    }

    return 0;
}
