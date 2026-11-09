#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main() {
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char digits[] = "0123456789";
char symbols[] = "!@#$%^&*";
char all[100];
char password[100];
int length, i, choice, useUpper, useLower, useDigits, useSymbols;
int len = 0;

srand(time(0));

printf("===== DAY 40 - PASSWORD GENERATOR =====\n");
printf("Enter Password Length (8-20): ");
scanf("%d", &length);

if (length < 8) 
{
printf("Too short! Minimum 8 pettali.\n");
return 0;
}
if (length > 20) 
{
printf("Too long! Maximum 20.\n");
return 0;
}

printf("Include Uppercase? (1=Yes 0=No): ");
scanf("%d", &useUpper);
printf("Include Lowercase? (1=Yes 0=No): ");
scanf("%d", &useLower);
printf("Include Digits? (1=Yes 0=No): ");
scanf("%d", &useDigits);
printf("Include Symbols? (1=Yes 0=No): ");
scanf("%d", &useSymbols);

if (useUpper == 1) 
{
strcat(all, upper);
len = len + strlen(upper);
}
if (useLower == 1) 
{
strcat(all, lower);
len = len + strlen(lower);
}
if (useDigits == 1) 
{
strcat(all, digits);
len = len + strlen(digits);
}
if (useSymbols == 1) 
{
strcat(all, symbols);
len = len + strlen(symbols);
}

if (len == 0) 
{
printf("Atleast okati select cheyali!\n");
return 0;
}

printf("\nGenerated Passwords:\n");
for (choice = 1; choice <= 5; choice++)
  {
for (i = 0; i < length; i++) {
password[i] = all[rand() % len];
}
password[length] = '\0';
printf("%d. %s\n", choice, password);
}

printf("\nStrength: ");
if (length >= 12 && useUpper == 1 && useLower == 1 && useDigits == 1 && useSymbols == 1) {
printf("STRONG\n");
} else if (length >= 10) 
{
printf("MEDIUM\n");
} else 
{
printf("WEAK - Length penchu\n");
}

printf("Day 40 Done Panduu!\n");
return 0;
}
