/*
Q24. Write a program to calculate electricity bill based on units consumed with these rates:
*/
#include<stdio.h>
int main(){
    int day;
    printf("Enter a day number =");
    scanf("%d",&day);
    if (day<=0){
        printf("0 unit\n");
    }
    else if(day<=100){
        printf("5 unit\n");
    }
    else if (day<=200){
        printf("7 unit\n");
    }
    else if(day<=300){
        printf("10 unit\n");
    }
    else if(day>300){
        printf("above at 12 unit\n");
    }

    return 0;
}