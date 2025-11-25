/*Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    printf("All substrings:\n");

    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}
