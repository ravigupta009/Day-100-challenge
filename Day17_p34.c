/*Write a program to check if a number is prime*/
#include<stdio.h>
int main(){
    int n, i, isprime;
    printf("Enter a number");
    scanf("%d",&n);
    if (n <= 1 ){
        printf("%d is a not prime number \n ",n);
        return 0;
    }
    for (i=2; i * i <= n; i++){
        if(n % i == 0){ 
            isprime = 0;
            break;
        }

    }
    if (isprime )
    printf("%d is a   prime number\n",n);
    else
    printf("%d is a  not  prime number\n",n);
    return 0;
}

