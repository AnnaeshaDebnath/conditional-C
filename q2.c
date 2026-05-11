#include<stdio.h>
void main()
{
char clr;
printf("enter first letter of the colour:");
scanf("%c",&clr);
if (clr=='o'||clr=='O')
{
printf("it contains ammonia");
}
else if(clr=='B'||clr=='b')
{
printf("it contains carn monoxide");
}
else if(clr=='G'||clr=='g')
{
printf("it contains oxygen");
}
else if(clr=='Y'||clr=='y')
{
printf("it contains hydrogen");
}
else
{
printf("contents unknowns");
}
}