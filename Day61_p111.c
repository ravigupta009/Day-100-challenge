/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/
#include <stdio.h>

int main() {
    int n, k;

    
    scanf("%d", &n);

    int arr[n];

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &k);

    int i = 0, j = 0;
    int q[n], front = 0, rear = 0;   
    while (j < n) {

       
        if (arr[j] < 0) {
            q[rear++] = arr[j];
        }

        
        if (j - i + 1 < k) {
            j++;
        }

        
        else if (j - i + 1 == k) {

            
            if (front == rear)
                printf("0 ");
            else
                printf("%d ", q[front]);

            
            if (arr[i] < 0)
                front++;

            i++;
            j++;
        }
    }

    return 0;
}
