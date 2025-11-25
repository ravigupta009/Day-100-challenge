/*Print initials of a name with the surname displayed in full.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int lastSpace = -1;

    
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    
    if (isalpha(str[0]))
        printf("%c.", toupper(str[0]));

    for (int i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && isalpha(str[i + 1]))
            printf("%c.", toupper(str[i + 1]));
    }

    
    printf(" %s\n", &str[lastSpace + 1]);

    return 0;
}
