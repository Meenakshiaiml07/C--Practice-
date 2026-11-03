#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll;
    char name[50];
    float cgpa;
};

int main() 
{
    int n;
    struct Student s;

    printf("Entha mandi students?: ");
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) 
    {
        printf("File open kaledu!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i+1);
        printf("Roll: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf(" %[^\n]", http://s.name);
        printf("CGPA: ");
        scanf("%f", &s.cgpa);

        fprintf(fp, "%d | %s | %.2f\n", http://s.roll, http://s.name, http://s.cgpa);
    }
    fclose(fp);
    printf("\nData http://students.txt lo save ayyindi!\n");

    printf("\n--- File nunchi chaduvuthunna ---\n");
    fp = fopen("students.txt", "r");
    char line[100];
    while (fgets(line, sizeof(line), fp)) 
    {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
