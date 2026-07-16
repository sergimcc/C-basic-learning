#include<stdio.h>
int main(void)
{
    printf("CALCULATOR OF THE AMOUNT OF EURO YOU HAVE TO INSERT IN ORDER TO PAY\n");
    float amount;
    printf("Please, tell me the amount of money you have to pay: ");
    scanf("%f", &amount);
    int euro20 = amount / 20;
    int new_amount = amount - euro20 * 20;
    int euro10 = new_amount / 10;
    new_amount = new_amount - euro10 * 10;
    int euro5 = new_amount / 5;
    new_amount = new_amount - euro5 * 5;
    int euro2 = new_amount / 2;
    new_amount = new_amount - euro2 * 2;
    int euro1 = new_amount;
    printf("You need to insert %d 20 euro bills, %d 10 euro bills, %d 5 euro bills, %d 2 euro coins, and %d 1 euro coins.\n", euro20, euro10, euro5, euro2, euro1 );
    return 0;
}