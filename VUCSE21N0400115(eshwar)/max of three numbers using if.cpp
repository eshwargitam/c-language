#include<stdio.h>
main()
{
	int a,b,c;
	printf("give a number:");
	scanf("%d",&a);
	printf("give a number:");
	scanf("%d",&b);
	printf("give a number:");
	scanf("%d",&c);
	if (c<a>b)
	{
	printf("a is the max number:%d",a);
	}
	else if(a<b>c)
	{
		printf("b is the max number:%d",b);
	}
	else
		printf("c is the max number:%d",c);
	
}
