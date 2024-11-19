// Author : Narayan Shastri
// Context: This program is A exercise given by code with harry for writting a program for deciding whom to give which gift
// Date : 13/12/2021
#include <stdio.h>
#include <conio.h>
int main()
{
    int Choice;
    printf("Please Select your domain From the following \n 1. Science & Mathematics \n 2. Science \n 3. Mathematics \n_____\b\b\b\b\b ");
    scanf("%d", &Choice);
    if (Choice == 1)
    {
        printf("\n The domain you enterd is Science and Mathematics ");
        printf("\n And So you will get 45 Rupees as a gift !");
    }
    else if (Choice == 2)
    {
        printf("\n The domain you enterd is Science  ");
        printf("\n And So you will get 15 Rupees as a gift !");
    }
    else if (Choice == 3)
    {
        printf("\n The domain you enterd is Mathematics ");
        printf("\n And So you will get 15 Rupees as a gift !");
    }
    else
    {
        printf("Error! invalid  Choice ");
    }
    return 0;
}
