#include<stdio.h>
#include<conio.h>
void main()
{
    int a=23;
    char b= 'g';
    float p= 54.98;
    printf("%c  is stored at address %u\n",b,&b);
    printf("%d  is stored at address %u\n",a,&a);
    printf("%f  is stored at address %u\n",p,&p);
    printf("\n size of int:%d",sizeof(int));
    printf("\n size of char:%c",sizeof(char));
    printf("\n size of float:%f",sizeof(float));
}
