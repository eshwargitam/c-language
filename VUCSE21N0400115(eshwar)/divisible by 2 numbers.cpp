#include<stdio.h>
main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if(x%15==0)
	{
		printf("x is divisible by 3&5");
	}
	else
	printf("x is not divisible by both 3&5");
}
