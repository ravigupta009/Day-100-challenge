/*Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>

int main() {
    FILE *source, *dest;
    char sourceFile[50], destFile[50];
    char ch;

   
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

   
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

  
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file.\n");
        fclose(source);
        return 1;
    }

   
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    
    fclose(source);
    fclose(dest);

    
    printf("\nFile copied successfully!\n");

    return 0;
}
