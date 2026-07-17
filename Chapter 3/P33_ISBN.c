#include <stdio.h>
int main (void)
{
int ISBN, GS1, Group, Publisher, Item, CheckDigit;
printf("Enter the ISBN number: ");
scanf("%d-%d-%d-%d-%d", &GS1, &Group, &Publisher, &Item, &CheckDigit);

printf("GS1: %d\n", GS1);
printf("Group: %d\n", Group);
printf("Publisher: %d\n", Publisher);
printf("Item: %d\n", Item);
printf("Check Digit: %d\n", CheckDigit);

return 0;
}