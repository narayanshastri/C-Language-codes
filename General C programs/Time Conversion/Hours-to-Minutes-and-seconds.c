// Author : Narayan Shastri
// Context:This Program is Written to calculate the time (in Hours) to in Minutes and Seconds
// Date : 27/11/2021

#include <conio.h>
#include <stdio.h>
void main()
/*This Program is Written to calculate the time (in Hours) to in Minutes and Seconds*/
{
    float hours, minutes, seconds;
    printf("Please Enter any value for time : ____\b\b\b\b");
    scanf("%f", &hours);
    minutes = hours * 60;
    seconds = minutes * 60;
    printf("\n The conversion of the time =%f Hours is %f____\b\b\b minutes, %f___\b\b\b Secpnfs", hours, minutes, seconds);
    getch();
}
