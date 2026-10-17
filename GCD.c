#include <stdio.h>

int main() 
{
    int a, b;
    printf("Rendu numbers ivvu: ");
    scanf("%d %d", &a, &b);

    int tempA = a, tempB = b;

    // Euclidean method
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD of %d and %d = %d\n", tempA, tempB, a);
    return 0;
}
