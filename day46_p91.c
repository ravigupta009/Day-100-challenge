/*Remove all vowels from a string.*/
#include <stdio.h>

int isVowel(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;  

    return (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u');
}

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing vowels: %s", result);

    return 0;
}
