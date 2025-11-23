/*Rotate an array to the right by k positions.*/
#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of rotations): ");
    scanf("%d", &k);

    
    k = k % n;

    
    for(i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

   
    for(i = 0; i < k/2; i++) {
        int temp = arr[i];
        arr[i] = arr[k-1-i];
        arr[k-1-i] = temp;
    }

    
    for(i = k; i < (k + (n-k)/2); i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-(i-k)];
        arr[n-1-(i-k)] = temp;
    }

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
