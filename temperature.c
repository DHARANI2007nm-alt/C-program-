#include<stdio.h>
#include<conio.h>
void main()
{
    float cel,fah;
    printf("Enter the temperature in celsius\n");
    scanf("%f",&cel);
    fah=(1.8*cel)+32;
    printf("temperature in fahrenheit: %f",fah);
    getch();
}
