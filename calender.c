#include <stdio.h>

int isLeap(int y) 
{
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int main() 
{
    int year, month;
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    
    printf("Year ivvu: ");
    scanf("%d", &year);
    printf("Month (1-12) ivvu: ");
    scanf("%d", &month);

    if(isLeap(year)) daysInMonth[1] = 29;

    // Find day of week for 1st of given month (Zeller's logic simple)
    int totalDays = 0;
    for(int y=1900; y<year; y++) 
    {
        totalDays += isLeap(y) ? 366 : 365;
    }
    for(int m=0; m<month-1; m++) 
    {
        totalDays += daysInMonth[m];
    }

    int startDay = (totalDays + 1) % 7; // 0=Sunday

    printf("\n--- %s %d ---\n", months[month-1], year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    for(int i=0; i<startDay; i++) printf("    ");

    for(int day=1; day<=daysInMonth[month-1]; day++) 
    {
        printf("%3d ", day);
        if((day + startDay) % 7 == 0) printf("\n");
    }
    printf("\n");
    return 0;
}
