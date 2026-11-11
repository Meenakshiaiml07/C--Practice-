#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book 
{
int id;
char title[50];
char author[30];
float price;
int isAvailable;
};

void addBook(struct Book _library, int _count) 
{
struct Book _b = library + _count;
printf("\nBook ID: ");
scanf("%d", &b->id);
printf("Title: ");
scanf(" %[^\n]", b->title);
printf("Author: ");
scanf(" %[^\n]", b->author);
printf("Price: ");
scanf("%f", &b->price);
b->isAvailable = 1;
(_count)++;
printf("Book Added!\n");
}

void displayBooks(struct Book _library, int count) 
{
struct Book _ptr = library;
if (count == 0) {
printf("\nLibrary Empty!\n");
return;
}
printf("\n--- All Books ---\n");
for (int i = 0; i < count; i++) 
{
printf("ID: %d | %s by %s | Rs.%.2f | %s\n", (ptr + i)->id, (ptr + i)->title, (ptr + i)->author, (ptr + i)->price, (ptr + i)->isAvailable ? "Available" : "Issued");
}
}

struct Book_ searchBook(struct Book _library, int count, int searchId) {
for (int i = 0; i < count; i++) 
{
if ((library + i)->id == searchId) 
{
return (library + i);
}
}
return NULL;
}

void issueBook(struct Book _library, int count) 
{
int id;
printf("\nIssue cheyalsina Book ID: ");
scanf("%d", &id);
struct Book _found = searchBook(library, count, id);
if (found == NULL) 
{
printf("Book Dorakaledu!\n");
} else if (found->isAvailable == 0) 
{
printf("Already Issued!\n");
} else {
found->isAvailable = 0;
printf("'%s' Issued Successfully!\n", found->title);
}
}

void returnBook(struct Book _library, int count) 
{
int id;
printf("\nReturn cheyalsina Book ID: ");
scanf("%d", &id);
struct Book _found = searchBook(library, count, id);
if (found == NULL) 
{
printf("Book Dorakaledu!\n");
} else {
found->isAvailable = 1;
printf("'%s' Returned Successfully!\n", found->title);
}
}

void sortByPrice(struct Book _library, int count) 
{
struct Book temp;
for (int i = 0; i < count - 1; i++) 
{
for (int j = 0; j < count - i - 1; j++) 
{
if ((library + j)->price > (library + j + 1)->price) 
{
temp = _(library + j);
_(library + j) = _(library + j + 1);
_(library + j + 1) = temp;
}
}
}
printf("\nPrice prakaram sort chesam!\n");
}

int main() 
{
struct Book library[100];
struct Book _ptr = library;
int count = 0;
int choice;
while (1) 
{
printf("\n===== DAY 42 - LIBRARY SYSTEM =====\n");
printf("1. Add Book\n");
printf("2. Display Books\n");
printf("3. Search Book\n");
printf("4. Issue Book\n");
printf("5. Return Book\n");
printf("6. Sort by Price\n");
printf("7. Exit\n");
printf("Choice: ");
scanf("%d", &choice);
switch (choice) 
{
case 1: addBook(ptr, &count); break;
case 2: displayBooks(ptr, count); break;
case 3: {
int id;
printf("Search ID: ");
scanf("%d", &id);
struct Book _f = searchBook(ptr, count, id);
if (f) printf("\nFound: %s by %s - Rs.%.2f\n", f->title, f->author, f->price);
else printf("Not Found!\n");
break;
}
case 4: issueBook(ptr, count); break;
case 5: returnBook(ptr, count); break;
case 6: sortByPrice(ptr, count); displayBooks(ptr, count); break;
case 7: printf("Day 42 Done Panduu! Library Closed!\n"); exit(0);
default: printf("Wrong choice!\n");
}
}
return 0;
}
