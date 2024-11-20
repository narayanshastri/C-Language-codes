#include <stdio.h>
#include <conio.h>
void main()

{
    int First_Number, Second_Number, Third_Number;
    printf("\n Please enter a value for First Number : ___ \b\b\b\b");
    scanf("%d", &First_Number);
    printf("\n Please enter a value for Second Number : ___ \b\b\b\b");
    scanf("%d", &Second_Number);
    printf("\n Please enter a value for Third Number : ___ \b\b\b\b");
    scanf("%d", &Third_Number);
    if (First_Number > Second_Number && First_Number > Third_Number)
    {
        printf("\n First Number is the greatest of all ");
    }
    else if (Second_Number > First_Number && Second_Number > Third_Number)
    {
        printf("\n Second Number is the greatest of all ");
    }
    else if (Third_Number > First_Number && Third_Number > Second_Number)
    {
        printf("\n Third Number is the greatest of all ");
    }
    else
    {
        printf("\n All Values are equal");
    }
}
