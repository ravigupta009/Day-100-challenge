#include<stdio.h>
int main(){
    char num;
    printf("Enter a character: ");
    scanf("%c", &num);
    if (num >= 'a' && num <= 'z')
    {
        printf("This is a lowercase letter %c.", num);
    }
    else if (num >= 'A' && num <= 'Z')
    {
        printf("This is an uppercase letter %c.", num);
    }
    

    return 0;
}