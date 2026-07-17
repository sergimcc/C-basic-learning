#include <stdio.h>
int main (void)
{
int itemnumber;
printf("Enter the item number: ");
scanf("%d", &itemnumber);

printf("Enter the item price: ");
float itemprice;
scanf("%f", &itemprice);

int day, month, year;
printf("Enter the purchase date (mm/dd/yyyy): ");
scanf("%d/%d/%d", &month, &day, &year);

printf("Item number: \t \t Item price: \t \t Purchase date: \n");
printf("%d \t %20.2f $ %20d/%d/%d\n", itemnumber, itemprice, month, day, year);
return 0;
}