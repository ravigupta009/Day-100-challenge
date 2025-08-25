#include<stdio.h>
int main(){
    int hours;
    int minutes;
    int seconds;
    printf("Enter value of time in seconds = ");
    scanf("%d",&seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 60);
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
     return 0;
}