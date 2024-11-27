// this code is written by Narayan Shastri for deciding wether the entered Charectedr is a consonant or a vowel
// Donot put any kind of ':' or ';' after if condition  or else
#include <stdio.h>
#include <conio.h>
void main()
{
    int character;
    printf("please enter any charecter of your choice ____\b\b\b\b");
    scanf("%c", &character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        printf("\n The entered Alphabet i.e. %c  is a vowel ", character);
    }
    else
    {
        printf("\n The entered Alphabet i.e. %c is a Not a vowel ", character);
    }
    getch();
}