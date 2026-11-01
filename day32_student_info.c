#include <stdio.h>

struct Student 
{
int roll;
char name[50];
float marks;
};

int main() 
{
struct Student s1;

printf("Enter Roll No: ");
scanf("%d", &s1.roll);

printf("Enter Name: ");
scanf("%s", http://s1.name);

printf("Enter Marks: ");
scanf("%f", &s1.marks);

printf("\n--- Student Details ---\n");
printf("Roll No: %d\n", http://s1.roll);
printf("Name: %s\n", http://s1.name);
printf("Marks: %.2f\n", http://s1.marks);

return 0;
}
