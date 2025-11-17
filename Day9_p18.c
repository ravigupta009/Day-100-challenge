#include <stdio.h>

int main(){
    int num;
    printf("Enter a percentage = ");
    scanf("%d", &num);
    if(num>=90){
        printf("  grade = A");
    }
    else
     if(num>=80){
        printf("  grade = B");
    }
    else 
    if(num>=70){
        printf("  grade = C");
    }
    else
    {
        printf("  grade = D");
    }
    return 0;
}