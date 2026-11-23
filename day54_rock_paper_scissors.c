#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
int userChoice, computerChoice;
int userScore = 0, computerScore = 0;
int rounds, i;

srand(time(0));

printf("=== DAY 54: ROCK PAPER SCISSORS ===\n");
printf("Enni rounds adali anukuntunnav? ");
scanf("%d", &rounds);

for (i = 1; i <= rounds; i++) 
{
printf("\n--- Round %d ---\n", i);
printf("1. Rock\n2. Paper\n3. Scissors\n");
printf("Nee choice (1-3): ");
scanf("%d", &userChoice);

if (userChoice < 1 || userChoice > 3) 
{
printf("Wrong choice ra! Round skip.\n");
continue;
}

computerChoice = (rand() % 3) + 1;

char *names[] = {"", "Rock", "Paper", "Scissors"};
printf("Nuvvu: %s | Computer: %s\n", names[userChoice], names[computerChoice]);

if (userChoice == computerChoice) 
{
printf("Draw!\n");
} else if ((userChoice == 1 && computerChoice == 3) ||
(userChoice == 2 && computerChoice == 1) ||
(userChoice == 3 && computerChoice == 2)) 
{
printf("Nuvvu gelichav!\n");
userScore++;
} else 
{
printf("Computer gelichindi!\n");
computerScore++;
}
printf("Score -> Nuvvu: %d | Computer: %d\n", userScore, computerScore);
}

printf("\n=== FINAL RESULT ===\n");
if (userScore > computerScore)
printf("Champion nuvve ra!\n");
else if (computerScore > userScore)
printf("Computer gelichindi, malli try chey!\n");
else
printf("Match Draw! Malli adu!\n");

return 0;
}
