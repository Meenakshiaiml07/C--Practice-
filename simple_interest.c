#include <stdio.h>

int main() 
{
    float principal, rate, time, interest;

    printf("--- Simple Interest Calculator ---\n");
    
    printf("Enter Principal Amount (P): ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &rate);

    printf("Enter Time in Years (T): ");
    scanf("%f", &time);

    // Formula: SI = (P * T * R) / 100
    interest = (principal * time * rate) / 100;

    printf("\nSimple Interest = %.2f\n", interest);
    printf("Total Amount = %.2f\n", principal + interest);

    return 0;
}
