/*Write a program to calculate library fine based on late days
as follows:
*/
#include<stdio.h>
int main(){
    int days;
    printf("Enter the number of days late  the books were returned = ");
    scanf("%d", &days);
    if (days <= 0) {
        printf("No fine\n");
    } else if (days <= 5) {
        printf("Fine = 2\n");
    } else if (days <= 10) {
        printf("Fine = 4\n");
    } else if(days <= 20) {
        printf("Fine = 6\n");
    }
    else if(days <= 30){
        printf("your membership is a cancelled\n");
    }
    return 0;

}