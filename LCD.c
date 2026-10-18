#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    
    // GCD kanukkovadam
    while(y != 0) 
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;

    // LCM formula: (a*b)/gcd
    int lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM (LCD) = %d", lcm);
    
    return 0;
}
