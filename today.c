#include <stdio.h>
#include <time.h>

int main() 
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    printf("Ee roju Date: %02d-%02d-%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Ee roju Day: %s\n", days[tm.tm_wday]);
    printf("Have a great Tuesday! 🪐\n");
    
    return 0;
}
