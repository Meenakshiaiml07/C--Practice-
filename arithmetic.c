#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Add: %d\nSub: %d\nMul: %d\nDiv: %d\n", a+b, a-b, a*b, a/b);
    return 0;
}
