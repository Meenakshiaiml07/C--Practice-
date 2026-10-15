#include <stdio.h>

int main() 
{
    int n;
    printf("Enni numbers? ");
    scanf("%d", &n);

    int arr[n];
    printf("Numbers ivvu: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int largest = arr[0], second = -99999;
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i]!= largest) {
            second = arr[i];
        }
    }

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second);
    return 0;
}
