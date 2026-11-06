#include <stdio.h>

int linearSearch(int arr[], int n, int key) 
{
for (int i = 0; i < n; i++) 
{
if (arr[i] == key) 
{
return i;
}
}
return -1;
}

int binarySearch(int arr[], int n, int key) 
{
int low = 0, high = n - 1;
while (low <= high) 
{
int mid = (low + high) / 2;
if (arr[mid] == key) 
{
return mid;
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
return -1;
}

int main() 
{
int n, key, choice, result;
printf("Enni numbers? ");
scanf("%d", &n);
int arr[n];
printf("%d numbers ivvu:\n", n);
for (int i = 0; i < n; i++) 
{
scanf("%d", &arr[i]);
}
printf("Search cheyalsina number: ");
scanf("%d", &key);
printf("\n1. Linear Search\n");
printf("2. Binary Search\n");
printf("Choice ivvu: ");
scanf("%d", &choice);
if (choice == 1) 
{
result = linearSearch(arr, n, key);
} else 
{
result = binarySearch(arr, n, key);
}
if (result == -1) 
{
printf("%d dorakaledhu\n", key);
} else 
{
printf("%d dorikindhi, position %d lo\n", key, result + 1);
}
return 0;
}
