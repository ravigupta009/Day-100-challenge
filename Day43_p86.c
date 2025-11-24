/*Check if a string is a palindrome.*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, end = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[end] != '\0') {
        end++;
    }

    
    if (str[end-1] == '\n') {
        end--;
    }

    end--; 

   
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
