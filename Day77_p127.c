/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

 
    fp1 = fopen("input.txt", "r");
    if (fp1 == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    
    fp2 = fopen("output.txt", "w");
    if (fp2 == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fp1);
        return 1;
    }

   
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(toupper(ch), fp2);
    }

  
    fclose(fp1);
    fclose(fp2);

    printf("Conversion complete! Lowercase converted to uppercase.\n");
    printf("Output written to output.txt\n");

    return 0;
}
