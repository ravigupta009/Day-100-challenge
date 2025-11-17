#include<stdio.h>
int main(){
    int a;
    printf("Enter your number");
    scanf("%d",&a);
    if (2000 <= a)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}