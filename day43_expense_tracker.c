#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Expense 
{
char category[30];
char note[50];
float amount;
char date[15];
};

void addExpense() 
{
FILE _fp = fopen("expenses.txt", "a");
if (fp == NULL) 
{
printf("File open avvaledu!\n");
return;
}
struct Expense e;
printf("\n--- Add Expense ---\n");
printf("Category (Food/Travel/Study/Other): ");
scanf(" %[^\n]", http://e.category);
printf("Note: ");
scanf(" %[^\n]", http://e.note);
printf("Amount: ");
scanf("%f", &e.amount);
printf("Date (DD-MM-YYYY): ");
scanf("%s", http://e.date);
fprintf(fp, "%s | %s | %.2f | %s\n", http://e.category, http://e.note, http://e.amount, http://e.date);
fclose(fp);
printf("Expense save ayyindi!\n");
}

void viewExpenses() 
{
FILE _fp = fopen("expenses.txt", "r");
if (fp == NULL) 
{
printf("\nInka em expenses levu. Mundhu add cheyyi.\n");
return;
}
char line[200];
printf("\n--- All Expenses ---\n");
while (fgets(line, sizeof(line), fp) != NULL) 
{
printf("%s", line);
}
fclose(fp);
}

void viewTotal() 
{
FILE *fp = fopen("expenses.txt", "r");
if (fp == NULL) 
{
printf("\nInka em levu.\n");
return;
}
char cat[30], note[50], date[15];
float amt, total = 0;
while (fscanf(fp, " %[^|]| %[^|]| %f | %[^\n]", cat, note, &amt, date) == 4) 
{
total += amt;
}
fclose(fp);
printf("\nTotal Expenses: %.2f\n", total);
}

int main() 
{
int choice;
while (1) 
{
printf("\n===== DAY 43 - EXPENSE TRACKER =====\n");
printf("1. Add Expense\n");
printf("2. View All Expenses\n");
printf("3. View Total\n");
printf("4. Exit\n");
printf("Choose: ");
scanf("%d", &choice);
if (choice == 1) addExpense();
else if (choice == 2) viewExpenses();
else if (choice == 3) viewTotal();
else if (choice == 4) 
{
printf("Bye! Day 43 done!\n");
break;
}
else printf("Wrong choice!\n");
}
return 0;
}
