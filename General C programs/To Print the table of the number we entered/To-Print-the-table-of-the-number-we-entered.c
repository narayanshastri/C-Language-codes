//Author : Narayan Shastri
//Date : 15/12/2021
//Purpose :WAP to Print The table Of the Entered Number
#include <stdio.h>
#include <conio.h>
int main()
{
    int Number, Index = 1;
    printf("\n PLease enter any value for 'number' : ____. \b\b\b\b");
    scanf("%d", &Number);
    printf("\n The table Of %d is as follows :", Number);
    do
    {
        printf(" \n %d X %d = %d ", Number, Index, Number * Index);
        Index++;
    } while (Index <= 10);
    return 0;
}