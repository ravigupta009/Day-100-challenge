/*Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

  
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

   
    fclose(fp);

    printf("\nStudent records saved successfully to students.txt\n");

    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\n--- Student Records from File ---\n");

   
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) {
        printf("Name: %-10s Roll: %-5d Marks: %.2f\n", name, roll, marks);
    }

    
    fclose(fp);

    return 0;
}
