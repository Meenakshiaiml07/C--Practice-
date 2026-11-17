#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) 
{
if (rear == SIZE - 1) 
{
printf("Queue Full!\n");
} else 
{
if (front == -1) front = 0;
rear++;
queue[rear] = value;
printf("%d added to queue\n", value);
}
}

void dequeue() 
{
if (front == -1 || front > rear) 
{
printf("Queue Empty!\n");
} else 
{
printf("%d removed from queue\n", queue[front]);
front++;
}
}

void display() 
{
if (front == -1 || front > rear) 
{
printf("Queue Empty!\n");
} else 
{
printf("Queue: ");
for (int i = front; i <= rear; i++) 
{
printf("%d ", queue[i]);
}
printf("\n");
}
}

int main() 
{
int choice, value;
while (1) 
{
printf("\n--- Day 48 Queue ---\n");
printf("1. Enqueue\n");
printf("2. Dequeue\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);

if (choice == 1) {
printf("Enter value: ");
scanf("%d", &value);
enqueue(value);
} else if (choice == 2) 
{
dequeue();
} else if (choice == 3) 
{
display();
} else if (choice == 4) 
{
break;
} else 
{
printf("Invalid choice!\n");
}
}
return 0;
}
