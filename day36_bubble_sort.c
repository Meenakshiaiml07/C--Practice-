#include <stdio.h>

int main() 
{
int n, i, j, temp;
int arr[100];

printf("Enni numbers enter cheyali? ");
scanf("%d", &n);

printf("%d numbers enter cheyyi:\n", n);
for (i = 0; i < n; i++) 
{
scanf("%d", &arr[i]);
}

printf("\nSort cheyaka mundu: ");
for (i = 0; i < n; i++) 
{
printf("%d ", arr[i]);
}

for (i = 0; i < n - 1; i++) 
{
for (j = 0; j < n - i - 1; j++) 
{
if (arr[j] > arr[j + 1]) 
{
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}

printf("\nSort chesaka: ");
for (i = 0; i < n; i++) 
{
printf("%d ", arr[i]);
}

printf("\n\nChinna number: %d", arr[0]);
printf("\nPedda number: %d", arr[n - 1]);

return 0;
}
