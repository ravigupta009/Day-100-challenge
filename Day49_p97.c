/*Print the initials of a name.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);

    
    if (isalpha(str[0])) {
        printf("%c", toupper(str[0]));
    }

    
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && isalpha(str[i + 1])) {
            printf(".%c", toupper(str[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
