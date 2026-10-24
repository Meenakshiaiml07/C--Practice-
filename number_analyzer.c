#include <stdio.h>

int isPrime(int n)
{ 
    if(n < 2) return 0;
    for(int i=2; i*i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
 }

int isPalindrome(int n)
{
    int rev = 0, temp = n;
    while(temp > 0)
    {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    return rev == n;
}

int main() 
{
    int num, temp, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    // Armstrong check
    while(temp > 0)
   {
        rem = temp % 10;
        sum += rem*rem*rem;
        temp /= 10;
    }

    printf("\n--- Day 24 Analysis for %d ---\n", num);
    printf("Prime: %s\n", isPrime(num) ? "Yes" : "No");
    printf("Palindrome: %s\n", isPalindrome(num) ? "Yes" : "No");
    printf("Armstrong: %s\n", sum == num ? "Yes" : "No");

    return 0;
}
