#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) 
{
if (top == MAX - 1) 
{
printf("Stack Overflow!\n");
} else {
stack[++top] = ch;
}
}

char pop() 
{
if (top == -1) 
{
return '\0';
} else 
{
return stack[top--];
}
}

int isEmpty() 
{
return top == -1;
}

void resetStack() 
{
top = -1;
}

int isMatching(char open, char close) 
{
return (open == '(' && close == ')') ||
(open == '{' && close == '}') ||
(open == '[' && close == ']');
}

int isBalanced(char expr[]) 
{
resetStack();
for (int i = 0; expr[i] != '\0'; i++) 
{
char ch = expr[i];
if (ch == '(' || ch == '{' || ch == '[') 
{
push(ch);
} else if (ch == ')' || ch == '}' || ch == ']') 
{
if (isEmpty()) return 0;
char popped = pop();
if (!isMatching(popped, ch)) return 0;
}
}
return isEmpty();
}

void reverseString(char str[])
{
resetStack();
for (int i = 0; str[i] != '\0'; i++)
{
push(str[i]);
}
printf("Reversed: ");
while (!isEmpty()) 
{
printf("%c", pop());
}
printf("\n");
}

int main() 
{
int choice;
char expr[MAX], str[MAX];

while (1) 
{
printf("\n--- DAY 14: STACK ---\n");
printf("1. Check Balanced Parentheses\n");
printf("2. Reverse a String\n");
printf("3. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);
getchar();

if (choice == 1) 
{
printf("Enter expression: ");
fgets(expr, MAX, stdin);
if (isBalanced(expr))
printf("Result: BALANCED\n");
else
printf("Result: NOT BALANCED\n");
}
else if (choice == 2) 
{
printf("Enter string: ");
fgets(str, MAX, stdin);
str[strcspn(str, "\n")] = 0;
reverseString(str);
}
else if (choice == 3) 
{
printf("Day 14 Done! 2 Weeks DSA Completed\n");
break;
}
else {
printf("Invalid choice!\n");
}
}
return 0;
}
