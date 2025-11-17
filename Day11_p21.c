#include <stdio.h>

int main(){
    int month;
    printf("Enter month numbers ,(1-12) = ");
    scanf("%d", &month);
    switch (month) {
        case 1:
            printf(" January\n number of days = 31");
            break;
        case 2:
            printf(" February\n number of days = 28");
            break;
        case 3:
            printf(" March\n number of days = 31");
            break;
        case 4:
            printf(" April\n number of days = 30");
            break;
        case 5:
            printf(" May\n number of days = 31");
            break;
        case 6:
            printf(" June\n number of days = 30");
            break;
        case 7:
            printf(" July\n number of days = 31");
            break;
        case 8:
            printf(" August\n number of days = 31");
            break;
        case 9:
            printf(" September\n number of days = 30");
            break;
        case 10:
            printf(" October\n number of days = 31");
            break;
        case 11:
            printf(" November\n number of days = 30");
            break;
        case 12:
            printf(" December\n number of days = 31");
            break;
        default:
            printf("Invalid month");
    }
    return 0;
}