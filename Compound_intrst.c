#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,ci;
	printf("enter the values of p,t,r");
	scanf("%f%f%f",&p,&t,&r);
	ci=p*(pow(1+r/100,t)-1);
	printf("ci=%f",ci);
	return 0;
}
