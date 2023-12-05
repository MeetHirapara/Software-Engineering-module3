//WAP to find area of circle

#include<stdio.h>
#define pi 3.14
main()
{
	float r,total;
	printf("Enter radius :");
	scanf("%f",&r);
	total=pi*r*r;
	printf("Total is :%.2f",total);	
}
