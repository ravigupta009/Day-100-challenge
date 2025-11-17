#include <stdio.h>

int main(){
   float sp, cp , profit, loss;
    printf("Enter the cost price =");
    scanf("%f",&cp);
    printf("Enter the selling price =");
    scanf("%f",&sp);
    if (sp>cp){
        profit = sp - cp;
        printf("profit = %.2f%%\n", (profit/cp)*100);
    }
    else if (cp>sp){
        loss = cp - sp;
        printf("loss = %.2f%%\n", (loss/cp)*100);
    }
    return 0;
}
