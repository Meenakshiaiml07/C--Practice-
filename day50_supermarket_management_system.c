#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product 
{
int id;
char name[50];
float price;
int stock;
struct Product _next;
};

struct Product _head = NULL;
float totalSales = 0;

void loadProducts() 
{
FILE _fp = fopen("products.txt", "r");
if (fp == NULL) return;
int id, stock;
char name[50];
float price;
while (fscanf(fp, "%d %s %f %d", &id, name, &price, &stock) != EOF) 
{
struct Product _p = (struct Product_)malloc(sizeof(struct Product));
p->id = id; strcpy(p->name, name); p->price = price; p->stock = stock; p->next = NULL;
if (head == NULL) head = p;
else 
{
struct Product _t = head;
while (t->next) t = t->next;
t->next = p;
}
}
fclose(fp);
FILE _fp2 = fopen("sales.txt", "r");
if (fp2 != NULL) { fscanf(fp2, "%f", &totalSales); fclose(fp2); }
}

void saveProducts() 
{
FILE _fp = fopen("products.txt", "w");
struct Product _t = head;
while (t) 
{
fprintf(fp, "%d %s %.2f %d\n", t->id, t->name, t->price, t->stock);
t = t->next;
}
fclose(fp);
FILE _fp2 = fopen("sales.txt", "w");
fprintf(fp2, "%.2f", totalSales);
fclose(fp2);
}

void addProduct() 
{
struct Product _p = (struct Product_)malloc(sizeof(struct Product));
printf("\nEnter Product ID: "); scanf("%d", &p->id);
printf("Enter Product Name: "); scanf("%s", p->name);
printf("Enter Price: "); scanf("%f", &p->price);
printf("Enter Stock: "); scanf("%d", &p->stock);
p->next = NULL;
if (head == NULL) head = p;
else { struct Product _t = head; while (t->next) t = t->next; t->next = p; }
saveProducts();
printf("Product Added!\n");
}

void showProducts() 
{
if (!head) { printf("\nNo Products!\n"); return; }
struct Product _t = head;
printf("\nID NAME PRICE STOCK\n");
printf("--------------------------------\n");
while (t) {
printf("%d %s Rs.%.2f %d", t->id, t->name, t->price, t->stock);
if (t->stock < 5) printf(" LOW STOCK!");
printf("\n");
t = t->next;
}
}

void deleteProduct() 
{
int id; printf("Enter ID to Delete: "); scanf("%d", &id);
struct Product _t = head, _prev = NULL;
while (t && t->id != id) { prev = t; t = t->next; }
if (!t) { printf("Not Found!\n"); return; }
if (!prev) head = t->next; else prev->next = t->next;
free(t); saveProducts(); printf("Deleted!\n");
}

void updateStock() 
{
int id, qty; printf("Enter ID: "); scanf("%d", &id);
struct Product _t = head;
while (t && t->id != id) t = t->next;
if (!t) { printf("Not Found!\n"); return; }
printf("Current Stock: %d\nAdd How Much? ", t->stock); scanf("%d", &qty);
t->stock += qty; saveProducts(); printf("Stock Updated!\n");
}

void searchProduct() 
{
char name[50]; printf("Enter Name to Search: "); scanf("%s", name);
struct Product _t = head; int found = 0;
while (t) {
if (strstr(t->name, name) != NULL) 
{
printf("Found: %d | %s | Rs.%.2f | Stock: %d\n", t->id, t->name, t->price, t->stock);
found = 1;
}
t = t->next;
}
if (!found) printf("No Product Found!\n");
}

void sortByPrice() {
if (!head) return;
int swapped;
struct Product _ptr, _lptr = NULL;
do {
swapped = 0; ptr = head;
while (ptr->next != lptr) {
if (ptr->price > ptr->next->price) {
int tid = ptr->id; float tp = ptr->price; int ts = ptr->stock; char tn[50]; strcpy(tn, ptr->name);
ptr->id = ptr->next->id; ptr->price = ptr->next->price; ptr->stock = ptr->next->stock; strcpy(ptr->name, ptr->next->name);
ptr->next->id = tid; ptr->next->price = tp; ptr->next->stock = ts; strcpy(ptr->next->name, tn);
swapped = 1;
}
ptr = ptr->next;
}
lptr = ptr;
} while (swapped);
printf("Sorted by Price!\n");
showProducts();
}

void billing() {
if (!head) { printf("Shop Empty!\n"); return; }
char custName[50]; printf("\nEnter Customer Name: "); scanf(" %[^\n]", custName);
float subtotal = 0;
FILE _bill = fopen("bill.txt", "w");
fprintf(bill, "========== D-MART BILL ==========\nCustomer: %s\n", custName);
fprintf(bill, "--------------------------------\n");
while (1) {
showProducts();
int id, qty; printf("\nEnter Product ID to Buy (0 to Finish): "); scanf("%d", &id);
if (id == 0) break;
struct Product _t = head;
while (t && t->id != id) t = t->next;
if (!t) { printf("Invalid ID!\n"); continue; }
printf("Enter Quantity: "); scanf("%d", &qty);
if (qty > t->stock) { printf("Only %d in stock!\n", t->stock); continue; }
t->stock -= qty;
float amt = qty _ t->price;
subtotal += amt;
fprintf(bill, "%s x %d = Rs.%.2f\n", t->name, qty, amt);
printf("Added: %s - Rs.%.2f\n", t->name, amt);
}
float gst = subtotal _ 0.05;
float discount = 0;
if (subtotal > 1000) discount = subtotal _ 0.10;
float total = subtotal + gst - discount;
totalSales += total;
fprintf(bill, "--------------------------------\n");
fprintf(bill, "Subtotal: Rs.%.2f\nGST (5%%): Rs.%.2f\nDiscount: -Rs.%.2f\nTOTAL: Rs.%.2f\n", subtotal, gst, discount, total);
fprintf(bill, "Thank You! Visit Again!\n");
fclose(bill);
saveProducts();
printf("\n========== BILL ==========\n");
printf("Subtotal: Rs.%.2f\nGST: Rs.%.2f\nDiscount: Rs.%.2f\n", subtotal, gst, discount);
printf("TOTAL TO PAY: Rs.%.2f\n", total);
printf("Bill saved in http://bill.txt\n");
}

void salesReport() 
{
printf("\n--- SALES REPORT ---\n");
printf("Total Sales Till Now: Rs.%.2f\n", totalSales);
int totalItems = 0; struct Product _t = head;
while (t) { totalItems += t->stock; t = t->next; }
printf("Total Stock Remaining: %d items\n", totalItems);
}

int main() 
{
loadProducts();
int choice;
printf("=== DAY 50 - SUPER MARKET MANAGEMENT ===\n");
while (1) 
{
printf("\n--- MAIN MENU ---\n");
printf("1. Admin - Add Product\n2. Admin - Show All Products\n3. Admin - Delete Product\n4. Admin - Update Stock\n5. Admin - Sort by Price\n6. Search Product\n7. Customer - Billing\n8. Sales Report\n9. Save & Exit\n");
printf("Enter Choice: "); scanf("%d", &choice);
switch (choice) 
{
case 1: addProduct(); break;
case 2: showProducts(); break;
case 3: deleteProduct(); break;
case 4: updateStock(); break;
case 5: sortByPrice(); break;
case 6: searchProduct(); break;
case 7: billing(); break;
case 8: salesReport(); break;
case 9: saveProducts(); printf("Day 50 Completed! 50/50 DONE\n"); return 0;
default: printf("Invalid!\n");
}
}
}
