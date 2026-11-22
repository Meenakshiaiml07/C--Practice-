#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
int userDice, compDice;
char ch;
srand(time(0));

printf("\n===== DAY 53 - DICE GAME =====\n");
printf("Nuvvu vs Computer, evariki pedda number vasthe vallu win\n");
printf("Start cheyadaniki enter kottu\n");
scanf("%c", &ch);

userDice = rand() % 6 + 1;
compDice = rand() % 6 + 1;

printf("Nee dice: %d\n", userDice);
printf("Computer dice: %d\n", compDice);

if(userDice > compDice) 
{
printf("Nuvvu gelichav Panduu!\n");
} else if(compDice > userDice) 
{
printf("Computer gelichindi!\n");
} else 
{
printf("Draw! Iddaru equal!\n");
}

return 0;
}
