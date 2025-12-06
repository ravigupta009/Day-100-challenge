/*Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;

  
    printf("Enter the filename to open: ");
    scanf("%s", filename);

   
    fp = fopen(filename, "r");

    
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    
    printf("\nContents of %s:\n\n", filename);

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    
    fclose(fp);

    return 0;
}
