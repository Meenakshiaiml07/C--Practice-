#include <stdio.h>

int main() 
{
    int num, range;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter range : ");
    scanf("%d", &range);

    printf("\n--- Multiplication Table of %d ---\n", num);

    for (int i = 1; i <= range; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
