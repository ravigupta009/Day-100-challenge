/*Write a program to find the LCM of two numbers..*/
#include<stdio.h>
int main(){
    int a,b,x,y,lcm;
    printf("Enter  two number =");
    scanf("%d %d",&a,&b);

    x = a;
    y = b;

    while (b != 0)
    {
      int temp = b;
      b = a % b;
      a = temp;
    }

    int hcf = a;
    lcm = (x * y)/hcf;

    printf("Lcm %d\n",lcm);
    
    return 0;
}