#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Question 
{
    char question[200];
    char option[4][100];
    int correct;
};

void showResult(int score, int total, char name[]) 
{
    printf("\n============================\n");
    printf("  GAME OVER %s!\n", name);
    printf("  Score: %d / %d\n", score, total);
    if (score == total) 
    {
        printf("  Perfect! Topper ra nuvvu\n");
    } else if (score >= total / 2) 
    {
        printf("  Good job! Inka konchem practice chalu\n");
    } else 
    {
        printf("  Parledu, malli try chey\n");
    }
    printf("============================\n");

    FILE *fp = fopen("quiz_scores.txt", "a");
    if (fp != NULL) 
    {
        fprintf(fp, "%s - %d/%d\n", name, score, total);
        fclose(fp);
        printf("Score save ayyindi: quiz_scores.txt lo chudu!\n");
    }
}

int main() {
    struct Question quiz[5] = 
  {
        {"C language ni evaru create chesaru?",
         {"Dennis Ritchie", "James Gosling", "Guido van Rossum", "Bjarne Stroustrup"}, 1},
        {"C lo 'int' size entha? (normal ga)",
         {"2 bytes", "4 bytes", "8 bytes", "1 byte"}, 2},
        {"Which loop at least okasari aina run avtundi?",
         {"for", "while", "do-while", "if"}, 3},
        {"Pointer ante enti?",
         {"Variable value", "Address ni store chese variable", "Function", "Array"}, 2},
        {"'printf' edi lo untundi?",
         {"conio.h", "stdio.h", "math.h", "string.h"}, 2}
    };

    char name[50];
    int answer, score = 0;
    int order[5] = {0, 1, 2, 3, 4};

    printf("=== Day 51: Quiz Game ===\n");
    printf("Nee peru cheppu: ");
    scanf("%s", name);

    srand(time(0));
    for (int i = 0; i < 5; i++) 
    {
        int j = rand() % 5;
        int temp = order[i];
        order[i] = order[j];
        order[j] = temp;
    }

    for (int i = 0; i < 5; i++) 
    {
        int q = order[i];
        printf("\nQ%d. %s\n", i + 1, quiz[q].question);
        for (int j = 0; j < 4; j++) 
        {
            printf("  %d. %s\n", j + 1, quiz[q].option[j]);
        }
        printf("Nee answer (1-4): ");
        scanf("%d", &answer);

        if (answer == quiz[q].correct) 
        {
            printf("Correct! +1\n");
            score++;
        } else 
        {
            printf("Wrong! Correct answer: %s\n", quiz[q].option[quiz[q].correct - 1]);
        }
    }

    showResult(score, 5, name);
    return 0;
}
