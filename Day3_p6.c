#include<stdio.h>
int main(){
    int a = 3, b = 5, a1=-1, b1=1;
    printf("swap ");
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    printf("The next swap values are \n");
    printf("swap ");
    int temp1 = a1;
    a1 = b1;
    b1 = temp1;
    printf("a1 = %d, b1 = %d\n", a1, b1);
    return 0;
}