#include <stdio.h>
int main (void)
{
int day, month, year;
printf("Enter your birthday (mm/dd/yyyy): ");
scanf("%d/%d/%d", &month, &day, &year);
printf("You were born on the month %d, the day %d, the year %d\n", month, day, year);
return 0;
}