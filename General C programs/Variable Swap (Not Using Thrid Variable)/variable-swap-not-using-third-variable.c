
//PROGRAM IS WRITTEN BY NARAYAN SHASTRI ON 27/11/2021
#include <conio.h>
#include <stdio.h>
void main()
/*This Program is Written for swapping values of Variables by USING A THIRD VARIABLE  */
{
    int x, y;
    printf("Please Enter any value for x: ____\b\b\b\b");
    scanf("%d", &x);
    printf("Please Enter any value for y: ____\b\b\b\b");
    scanf("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\n Value Of x & y after Swap Is  x= %d and y=%d ", x, y);
    getch();
}
