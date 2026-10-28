#include <stdio.h>
#include <time.h>

int main() 
{
    int bd, bm, by;
    printf("Enter your DOB (dd mm yyyy): ");
    scanf("%d %d %d", &bd, &bm, &by);

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    int cd = tm->tm_mday;
    int cm = tm->tm_mon + 1;
    int cy = tm->tm_year + 1900;

    int age = cy - by;
    if (cm < bm || (cm == bm && cd < bd)) 
    {
        age--;
    }

    printf("\nToday: %02d-%02d-%04d\n", cd, cm, cy);
    printf("Your Age: %d years\n", age);
    
    if(age >= 18)
        printf("You are eligible to vote!\n");
    else
        printf("You have %d years left to vote\n", 18 - age);

    return 0;
}
