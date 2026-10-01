#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Day 5: Find Largest of 3 Numbers\n");
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Logic to find largest
    if (a >= b && a >= c) {
        printf("Largest is: %d\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("Largest is: %d\n", b);
    } 
    else {
        printf("Largest is: %d\n", c);
    }

    return 0;
}
