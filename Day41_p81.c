/*Count characters in a string without using built-in length functions.*/
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); 
    int i = 0;
    if (s[0] == '\0') return 0;
    
    while (s[i] != '\0') {
        i++;
    }
    
    if (i > 0 && s[i-1] == '\n') i--;
    printf("Length = %d\n", i);
    return 0;
}
