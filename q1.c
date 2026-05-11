#include<stdio.h>
void main()
{
float bmi,weight,height;
printf("enter weight");
scanf("%f",&weight);
printf("enter height");
scanf("%f",&height);
bmi=(703*weight)/(height*height);
if (bmi<18.5)
{
printf("underweight");
}
else if(bmi>=18.5 && bmi<=24.9)
{
printf("normal");
}
else if (bmi>=25.0 && bmi<=29.9)
{
printf("overweight");
}
else
{
printf("obese");
}
}