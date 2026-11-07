#include <stdio.h>

int balance = 5000;
int pin = 1234;

void checkBalance() 
{
printf("\nYour balance: Rs. %d\n", balance);
}

void deposit() 
{
int amount;
printf("\nEnter amount to deposit: ");
scanf("%d", &amount);
if (amount > 0)
{
balance = balance + amount;
printf("Rs. %d deposited successfully!\n", amount);
checkBalance();
} else 
{
printf("Invalid amount!\n");
}
}

void withdraw() 
{
int amount;
printf("\nEnter amount to withdraw: ");
scanf("%d", &amount);
if (amount > 0 && amount <= balance) 
{
balance = balance - amount;
printf("Please collect your cash: Rs. %d\n", amount);
checkBalance();
} else
{
printf("Insufficient balance or invalid amount!\n");
}
}

int main() 
{
int enteredPin, choice;
printf("=== Welcome to My ATM ===\n");
printf("Enter PIN: ");
scanf("%d", &enteredPin);
if (enteredPin != pin)
{
printf("Wrong PIN! Access denied.\n");
return 0;
}
printf("\nLogin Successful!\n");
do {
printf("\n--- MENU ---\n");
printf("1. Check Balance\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) 
{
case 1:
checkBalance();
break;
case 2:
deposit();
break;
case 3:
withdraw();
break;
case 4:
printf("\nThank you! Visit again.\n");
break;
default:
printf("Invalid choice! Try again.\n");
}
} while (choice != 4);
return 0;
}

