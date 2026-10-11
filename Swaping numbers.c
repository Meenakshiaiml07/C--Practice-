#include <stdio.h>

int main() 
{
    int a, b, temp;
    
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    printf("After Swapping: a = %d, b = %d\n", a, b);
    return 0;
}
