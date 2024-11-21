// Enter any value for x and y and Write a menu driven program for
// 1) '+' 2) '-' 3) '*' 4) "/"
#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    char choice;
    printf("\n Enter any value for x : ____ \b\b\b\b");
    scanf("%d", &x);
    printf("\n Enter any value for y : ____ \b\b\b\b");
    scanf("%d", &y);
    printf("please enter any choice : ____ \b\b\b\b");
    scanf("%c", &choice);
    switch (choice)
    {
    case '+':
        printf("\n %d + %d= %d ", x, y, x + y);
        break;
    case '-':
        printf("\n %d - %d= %d ", x, y, x - y);
        break;
    case '*':
        printf("\n %d * %d= %d ", x, y, x * y);
        break;
    case '/':
        printf("\n %d / %d= %d ", x, y, x / y);
        break;
    default:
        printf("\n Invalid Option !!!");
        break;
    }
}
