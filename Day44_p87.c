/*Count spaces, digits, and special characters in a string.*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (!(ch >= 'a' && ch <= 'z') &&
                 !(ch >= 'A' && ch <= 'Z') &&
                 ch != '\n') {    
            special++;
        }

        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
