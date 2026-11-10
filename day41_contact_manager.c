#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Contact 
{
char name[50];
char phone[15];
char email[50];
};

void addContact() 
{
FILE _fp = fopen("contacts.txt", "a");
struct Contact c;
printf("\nEnter Name: ");
scanf(" %[^\n]", http://c.name);
printf("Enter Phone: ");
scanf("%s", http://c.phone);
printf("Enter Email: ");
scanf("%s", http://c.email);
fprintf(fp, "%s,%s,%s\n", http://c.name, http://c.phone, http://c.email);
fclose(fp);
printf("\nContact Saved Successfully!\n");
}

void viewContacts() {
FILE _fp = fopen("contacts.txt", "r");
struct Contact c;
char line[150];
int count = 0;
if (fp == NULL) {
printf("\nNo contacts found!\n");
return;
}
printf("\n--- All Contacts ---\n");
while (fgets(line, sizeof(line), fp)) 
{
sscanf(line, "%[^,],%[^,],%[^\n]", http://c.name, http://c.phone, http://c.email);
printf("%d. %s | %s | %s\n", ++count, http://c.name, http://c.phone, http://c.email);
}
if (count == 0) printf("No contacts yet.\n");
fclose(fp);
}

void searchContact() {
FILE _fp = fopen("contacts.txt", "r");
char searchName[50], line[150];
struct Contact c;
int found = 0;
if (fp == NULL) {
printf("\nNo contacts found!\n");
return;
}
printf("\nEnter Name to Search: ");
scanf(" %[^\n]", searchName);
while (fgets(line, sizeof(line), fp)) 
{
sscanf(line, "%[^,],%[^,],%[^\n]", http://c.name, http://c.phone, http://c.email);
if (strstr(c.name, searchName) != NULL) 
{
printf("\nFound: %s | %s | %s\n", http://c.name, http://c.phone, http://c.email);
found = 1;
}
}
if (!found) printf("\nContact Not Found!\n");
fclose(fp);
}

void deleteContact() 
{
FILE _fp = fopen("contacts.txt", "r");
FILE *temp = fopen("temp.txt", "w");
char delName[50], line[150];
struct Contact c;
int found = 0;
if (fp == NULL) 
{
printf("\nNo contacts found!\n");
return;
}
printf("\nEnter Name to Delete: ");
scanf(" %[^\n]", delName);
while (fgets(line, sizeof(line), fp))
{
sscanf(line, "%[^,],%[^,],%[^\n]", http://c.name, http://c.phone, http://c.email);
if (strcmp(c.name, delName) == 0) 
{
found = 1;
continue;
}
fprintf(temp, "%s,%s,%s\n", http://c.name, http://c.phone, http://c.email);
}
fclose(fp);
fclose(temp);
remove("contacts.txt");
rename("temp.txt", "contacts.txt");
if (found) printf("\nContact Deleted!\n");
else printf("\nContact Not Found!\n");
}

int main() 
{
int choice;
while (1) 
{
printf("\n====== DAY 41 - CONTACT MANAGER ======\n");
printf("1. Add Contact\n");
printf("2. View All Contacts\n");
printf("3. Search Contact\n");
printf("4. Delete Contact\n");
printf("5. Exit\n");
printf("Enter Choice: ");
scanf("%d", &choice);
switch (choice) 
{
case 1: addContact(); break;
case 2: viewContacts(); break;
case 3: searchContact(); break;
case 4: deleteContact(); break;
case 5: printf("\nBye Panduu! Day 41 Done\n"); return 0;
default: printf("\nInvalid Choice!\n");
}
}
}
