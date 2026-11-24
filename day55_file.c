#include <stdio.h>

int main() 
{
char name[50];
int marks;
char ch;

FILE *fp = fopen("student.txt", "w");

printf("Nee peru: ");
scanf("%s", name);
printf("Nee marks: ");
scanf("%d", &marks);

fprintf(fp, "Name: %s\nMarks: %d\n", name, marks);
fclose(fp);
printf("Save ayipoyindi!\n");

printf("\n--- File lo em undho ---\n");
fp = fopen("student.txt", "r");
while ((ch = fgetc(fp)) != EOF) 
{
printf("%c", ch);
}
fclose(fp);

return 0;
}
