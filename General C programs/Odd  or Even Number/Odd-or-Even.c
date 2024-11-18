	// Author : Narayan Shastri
	// Context: This program is written c=t knoiw weether the number entered is an odd number or an even number
	// Date : 13/12/2021
	#include <stdio.h>
	#include <conio.h>
	void main()
	{
	    int Number;
	    printf("please enter any number : ");
	    scanf("%d", &Number);
	    if (Number % 2 == 0)
	    {
	        printf("\n The number you entered is an even number ");
	    }
	    else
	    {
	        printf("\n The number you entered is a odd number");
	    }
}