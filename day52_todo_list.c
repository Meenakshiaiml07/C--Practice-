#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Task 
{
char title[100];
int done;
};

struct Task tasks[MAX];
int count = 0;

void saveToFile() 
{
FILE _fp = fopen("todo.txt", "w");
if (fp == NULL) return;
for (int i = 0; i < count; i++) 
{
fprintf(fp, "%d|%s\n", tasks[i].done, tasks[i].title);
}
fclose(fp);
}

void loadFromFile() 
{
FILE _fp = fopen("todo.txt", "r");
if (fp == NULL) return;
char line[120];
count = 0;
while (fgets(line, sizeof(line), fp) != NULL && count < MAX) 
{
line[strcspn(line, "\n")] = '\0';
char _sep = strchr(line, '|');
if (sep != NULL) 
{
_sep = '\0';
tasks[count].done = atoi(line);
strcpy(tasks[count].title, sep + 1);
count++;
}
}
fclose(fp);
}

void addTask() 
{
if (count >= MAX) 
{
printf("List full ayipoyindi!\n");
return;
}
printf("Task enti? : ");
getchar();
fgets(tasks[count].title, sizeof(tasks[count].title), stdin);
tasks[count].title[strcspn(tasks[count].title, "\n")] = '\0';
tasks[count].done = 0;
count++;
saveToFile();
printf("Task add ayipoyindi\n");
}

void viewTasks() 
{
if (count == 0) 
{
printf("Em tasks levu. Chill!\n");
return;
}
printf("\n--- Nee To-Do List ---\n");
for (int i = 0; i < count; i++) 
{
printf("%d. [%s] %s\n", i + 1, tasks[i].done ? "DONE" : "    ", tasks[i].title);
}
}

void markDone() 
{
int n;
viewTasks();
if (count == 0) return;
printf("Ye task complete chesav? number ivvu: ");
scanf("%d", &n);
if (n >= 1 && n <= count) 
{
tasks[n - 1].done = 1;
saveToFile();
printf("Super! Oka task finish\n");
} else 
{
printf("Wrong number!\n");
}
}

void deleteTask() 
{
int n;
viewTasks();
if (count == 0) return;
printf("Ye task delete cheyali? number ivvu: ");
scanf("%d", &n);
if (n >= 1 && n <= count) 
{
for (int i = n - 1; i < count - 1; i++) 
{
tasks[i] = tasks[i + 1];
}
count--;
saveToFile();
printf("Task delete ayipoyindi.\n");
} else {
printf("Wrong number!\n");
}
}

int main() 
{
int choice;
loadFromFile();
printf("=== DAY 52 - TO-DO LIST MANAGER ===\n");
while (1) 
{
printf("\n1. Add Task\n");
printf("2. View Tasks\n");
printf("3. Mark as Done\n");
printf("4. Delete Task\n");
printf("5. Exit\n");
printf("Choice: ");
scanf("%d", &choice);
if (choice == 1) addTask();
else if (choice == 2) viewTasks();
else if (choice == 3) markDone();
else if (choice == 4) deleteTask();
else if (choice == 5) 
{
printf("Bye Panduu! Repu Day 53 lo kaluddam.\n");
break;
}
else printf("1-5 madhyalo ivvu!\n");
}
return 0;
}
