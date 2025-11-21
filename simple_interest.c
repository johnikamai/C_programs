#include<stdio.h>
int main()
{
	int p,t,r,simpleinterest;
	printf("enter p&t&r values");
	scanf("%d%d%d",&p,&t,&r);
	simpleinterest=(p*t*r)/100;
	printf("simple interest=%d",simpleinterest);
	return 0;
}
