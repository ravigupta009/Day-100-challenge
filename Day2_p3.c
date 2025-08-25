#include<stdio.h>
int main(){
    int a = 5, b = 10;

    int area_of_rectangle = a * b;
    int perimeter_of_rectangle = 2 * (a + b);
    printf("area = %d\n", area_of_rectangle);
    printf("perimeter = %d\n", perimeter_of_rectangle);
    printf("The next value of  rectangle of area and perimeter is:\n");
    return 0;
}