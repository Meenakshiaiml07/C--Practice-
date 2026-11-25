#include <stdio.h>
int main() 
{
int arr[100], n, i, key, found = 0;
printf("Enni numbers? ");
scanf("%d", &n);
printf("Numbers ivvu:\n");
for(i=0; i<n; i++) 
{
scanf("%d", &arr[i]);
}
printf("Search cheyalsina number enti? ");
scanf("%d", &key);
for(i=0; i<n; i++) 
{
if(arr[i] == key) 
{
printf("Dorikindi! %d position lo undi", i+1);
found = 1;
break;
}
}
if(found == 0) 
{
printf("Dorakaledu");
}
return 0;
}

