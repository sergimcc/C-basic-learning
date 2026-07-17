#include <stdio.h>
int main (void) 
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
    printf("Enter 16 numbers from 1-16 in order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
    printf("Here is your 4 by 4 arrangement: \n %d %4d %4d %4d \n %d %4d %4d %4d \n %d %4d %4d %4d \n %d %4d %4d %4d", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16);
    int sumhoritzontalrow1 = num1 + num2 + num3 + num4;
    int sumhoritzontalrow2 = num5 + num6 + num7 + num8;
    int sumhoritzontalrow3 = num9 + num10 + num11 + num12;
    int sumhoritzontalrow4 = num13 + num14 + num15 + num16;
    int sumverticalcolumn1 = num1 + num5 + num9 + num13;
    int sumverticalcolumn2 = num2 + num6 + num10 + num14;
    int sumverticalcolumn3 = num3 + num7 + num11 + num15;
    int sumverticalcolumn4 = num4 + num8 + num12 + num16;
    int sumdiagonal1 = num1 + num6 + num11 + num16;
    int sumdiagonal2 = num4 + num7 + num10 + num13;
    printf("\nThe sums of the rows are: \n First row: %d \n Second row: %d \n Third row: %d \n Fourth row: %d", sumhoritzontalrow1, sumhoritzontalrow2, sumhoritzontalrow3, sumhoritzontalrow4);
    printf("\nThe sums of the columns are: \n First column: %d \n Second column: %d \n Third column: %d \n Fourth column: %d", sumverticalcolumn1, sumverticalcolumn2, sumverticalcolumn3, sumverticalcolumn4);
    printf("\nThe sums of the diagonals are: \n First diagonal: %d \n Second diagonal: %d", sumdiagonal1, sumdiagonal2);
    return 0;
}