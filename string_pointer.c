#include <stdio.h>

int main() 
{
    char str[100];
    char *start, *end;
    char temp;

    printf("=== DAY 21 - String Reverse using Pointer ===\n");
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // space tho sahaa teesukuntundi

    // start ni first char daggara pettam
    start = str;
    
    // end ni last char daggara ki teesukellam
    end = str;
    while (*end != '\0') {
        end++;
    }
    end--; // \0 mundu unna last char

    // ippudu swap chestu reverse cheddam
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed String: %s\n", str);
    return 0;
}
