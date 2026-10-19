#include <stdio.h>

int main() 
{
    int n, i, j, temp;
    
    printf("Day 19 - Array Sorting\n");
    printf("Enni numbers enter chesthav : ");
    scanf("%d", &n);

    int arr[n];
    
    printf("%d numbers enter cheyyi:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort logic
    for(i = 0; i < n-1; i++) 
{
        for(j = 0; j < n-i-1; j++) 
{
            if(arr[j] > arr[j+1]) 
{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array (Ascending order):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
