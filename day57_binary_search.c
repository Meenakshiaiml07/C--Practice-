#include <stdio.h>

int main() 
{
int n, i, j, temp, key;
int arr[100];
int low, high, mid, found = 0;

printf("Day 57 - Binary Search\n");
printf("Enni numbers enter cheyali? ");
scanf("%d", &n);

printf("Numbers enter chey:\n");
for (i = 0; i < n; i++) 
{
scanf("%d", &arr[i]);
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

printf("\nSorted array: ");
for (i = 0; i < n; i++) 
{
printf("%d ", arr[i]);
}

printf("\n\nSearch cheyalsina number enter chey: ");
scanf("%d", &key);

low = 0;
high = n - 1;

while (low <= high) 
{
mid = (low + high) / 2;

if (arr[mid] == key) 
{
printf("\n%d found ayyindi! Position: %d", key, mid + 1);
found = 1;
break;
}
else if (arr[mid] < key) 
{
low = mid + 1;
}
else 
{
high = mid - 1;
}
}

if (found == 0) 
{
printf("\n%d dorakaledu!", key);
}

return 0;
}
