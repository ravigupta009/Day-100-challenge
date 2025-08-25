#include<stdio.h>
int main(){
    int a = 10, b = 20, a1 = 7, b1 = 14;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    a1 = a1 + b1;
    b1 = a1 - b1;
    a1 = a1 - b1;
    printf("After swapping: a1 = %d, b1 = %d\n", a1, b1);
    return 0;
}