/*A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float avg;

    // Open file in read mode
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    // Close file
    fclose(fp);

    // Check if file had at least one number
    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    // Calculate average
    avg = (float) sum / count;

    // Display results
    printf("Total Numbers Read : %d\n", count);
    printf("Sum                : %d\n", sum);
    printf("Average            : %.2f\n", avg);

    return 0;
}
