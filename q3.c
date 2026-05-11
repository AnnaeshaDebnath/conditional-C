#include<stdio.h>
void main()
{
float n;
printf("enter any number");
scanf("%f",&n);
if(n<5.0)
{
printf("little or no damage");
}
else if(n>=5.0&&n<5.5)
{
printf("some damage");
}
else if(n>=5.5&&n<6.5)
{
printf("serious damage:walls may crack or fall");
}
else if(n>=6.5&&n<7.5)
{
printf("disaster:houses and buildings may collapse");
}
else
{
printf("catastrophe:most building destroyed");
}
}