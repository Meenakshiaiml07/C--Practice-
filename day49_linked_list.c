#include <stdio.h>
#include <stdlib.h>

struct Node 
{
int data;
struct Node _next;
};

int main() 
{
struct Node _head = NULL, _temp, _newNode;
int n, value, i;

printf("How many nodes? ");
scanf("%d", &n);

for (i = 0; i < n; i++) 
{
printf("Enter value %d: ", i + 1);
scanf("%d", &value);
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;

if (head == NULL) 
{
head = newNode;
} else 
{
temp = head;
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
}

printf("Linked List: ");
temp = head;
while (temp != NULL) 
{
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
return 0;
}
