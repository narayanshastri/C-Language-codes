#include <stdio.h>
#include <conio.h>
float main()
{
    float radius, area, circumference;
    float pi = 3.14;
    printf("\n Please enter the value of Radius : ____\b\b\b");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("\n The area of the circle with radius %f cm is %f sq.cm", radius, area);
    printf("\n And it's circumference is %f cm.", circumference);
    getch();
}