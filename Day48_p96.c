/*Reverse each word in a sentence without changing the word order.*/
#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0;

    while (1) {
        
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Reversed words: %s", str);
    return 0;
}

