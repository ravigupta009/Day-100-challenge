// #include<stdio.h>
// int main(){
//     int principal = 1000;
//     float rate = 5.0;
//     int time = 2;
//     float interest;
//     interest = (principal * rate * time) / 100;
//     printf("The interest is: %.2f\n", interest);
//     return 0;
// }
#include<stdio.h>
#include<math.h>
int main(){
    double principal = 1000.0;
    double rate = 5.0;
    double time = 2.0;
    double interest;
    interest = (principal * rate * time) / 100;
    printf("The interest is: %.2f\n", interest);
    
    return 0;
}