#include<stdio.h>
void main()
{
float x,y;
printf("enter x coordinate");
scanf("%f",&x);
printf("enter y coordinate");
scanf("%f",&y);
if(x>0&&y>0)
{
printf("in 1st quadrant");
}
else if (x<0&&y>0)
{
printf("in the 2nd quadrant");
}
else if(x<0&&y<0)
{
printf("in the 3rd quadrant");
}
else if(x>0&&y<0)
{
printf("in the 4th quadrant ");
}
else if (x==0&&y!=0)
{
printf("lies on y axis");
}
else if(x!=0&&y==0)
{
printf("lies on x axis");
}
else
{
printf("lies in the origin");
}
}
