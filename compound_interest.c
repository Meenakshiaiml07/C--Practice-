#include <stdio.h>
#include <math.h>

int main() 
{
    float principal, rate, time, n, amount, ci;

    printf("=== Compound Interest Calculator ===\n");
    
    printf("Principal Amount (P): ");
    scanf("%f", &principal);
    
    printf("Annual Rate %% (R): ");
    scanf("%f", &rate);
    
    printf("Time in Years (T): ");
    scanf("%f", &time);
    
    printf("Times compounded per year (n) [1=yearly, 12=monthly]: ");
    scanf("%f", &n);

    // Formula: A = P * (1 + r/(100*n))^(n*t)
    amount = principal * pow((1 + rate / (100 * n)), n * time);
    ci = amount - principal;

    printf("\n----------------------------\n");
    printf("Total Amount: %.2f\n", amount);
    printf("Compound Interest: %.2f\n", ci);
    printf("----------------------------\n");

    return 0;
}
