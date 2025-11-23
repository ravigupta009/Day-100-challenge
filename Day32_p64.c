/*Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int digit, maxFreq = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    
    if (num < 0) {
        num = -num;
    }

   
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times = %d\n", maxDigit);
    printf("Number of occurrences = %d\n", maxFreq);

    return 0;
}
