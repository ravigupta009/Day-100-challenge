/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

   
    if(k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return 0;
    }

    int windowSum = 0, maxSum = 0;

    
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    
    for(int i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];
        if(windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);

    return 0;
}
