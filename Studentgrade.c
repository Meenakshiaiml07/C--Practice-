#include <stdio.h>

int main() 
{
    int marks[5];
    int total = 0;
    float percentage;
    char *subjects[] = {"Maths", "Science", "English", "Social", "Telugu"};

    printf("=== Student Grade System ===\n\n");

    // Marks input
    for(int i = 0; i < 5; i++) 
   {
        printf("%s marks (0-100): ", subjects[i]);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100) 
       {
            printf("Invalid marks! 0-100 madhya ivvu.\n");
            i--; // malla adugu
            continue;
        }
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\n--------------------------\n");
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // Grade logic
    if(percentage >= 90) 
    {
        printf("Grade: A+ (Outstanding!)\n");
    } else if(percentage >= 80) 
    {
        printf("Grade: A (Excellent)\n");
    } else if(percentage >= 70) 
    {
        printf("Grade: B (First Class)\n");
    } else if(percentage >= 60) 
    {
        printf("Grade: C (Second Class)\n");
    } else if(percentage >= 35) 
    {
        printf("Grade: D (Pass)\n");
    } else {
        printf("Grade: F (Fail - Try again!)\n");
    }
    printf("--------------------------\n");

    return 0;
}
