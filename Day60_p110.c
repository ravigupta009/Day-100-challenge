/*Write a program to take an integer array arr 
and an integer k as inputs. The task is to find 
the maximum element in each subarray of size k
 moving from left to right. Print the maximum elements
  for each window separated by spaces as output.*/
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
        printf("Window size k cannot be greater than array size.\n");
        return 0;
    }

    int dq[n];   
    int front = 0, rear = -1;

    
    for(int i = 0; i < k; i++) {
        while(rear >= front && arr[dq[rear]] <= arr[i])
            rear--;
        dq[++rear] = i;
    }

    
    for(int i = k; i < n; i++) {
      
        printf("%d ", arr[dq[front]]);

        
        while(front <= rear && dq[front] <= i - k)
            front++;

       
        while(rear >= front && arr[dq[rear]] <= arr[i])
            rear--;

        dq[++rear] = i;
    }

    
    printf("%d", arr[dq[front]]);

    return 0;
}
