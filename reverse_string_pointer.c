#include <stdio.h>

int main() 
{
    char str[100], *start, *end, temp;
    
    printf("Enter string: ");
    scanf("%[^\n]", str);

    start = str;
    end = str;
    while(*end != '\0') end++;
    end--;

    while(start < end) 
   {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed: %s\n", str);
    return 0;
}
