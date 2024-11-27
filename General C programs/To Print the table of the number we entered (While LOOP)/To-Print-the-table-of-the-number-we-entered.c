//Author : Narayan Shastri
//Date : 15/12/2021
//Purpose : To print the table using While LOOP
#include <stdio.h>
#include <conio.h>
void main()
{
    int Number, Index = 0;
    printf("\n Please Enter any Value for the number :_______\b\b\b\b\b");
    scanf("%d", &Number);
    printf("\n The table of the number you entrered is as follows :");
    while (Index <= 10)
    {
        printf("\n %d X %d = %d ", Number, Index, Number * Index);
        Index++;
    }
    getch();
}