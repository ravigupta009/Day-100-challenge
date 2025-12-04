/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/
#include <stdio.h>

int main() {
    int m, n;

   
    scanf("%d", &m);
    scanf("%d", &n);

    int a[m], b[n], merged[m + n];

    
    for(int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    
    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    
    while(i < m && j < n) {
        if(a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

   
    while(i < m)
        merged[k++] = a[i++];

    while(j < n)
        merged[k++] = b[j++];

   
    for(i = 0; i < m + n; i++)
        printf("%d ", merged[i]);

    return 0;
}
