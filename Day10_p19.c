#include <stdio.h>

int main(){
    int num,num1,num2;
    printf("Enter three numbers = ");
    scanf("%d %d %d", &num, &num1, &num2);
    if (num+num1>num2 && num1==num2){
        printf("Equilateral ");
    }
    else if (num1 == (1.0 / 2) * num1 * num2){
        printf("Isosceles ");
    }
    else{
        printf("Scalene ");
    }
    return 0;
}