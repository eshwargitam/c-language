#include<stdio.h>
main()
{
	int a,b;
	printf("give a value:");
	scanf("%d",&a);
	printf("give a value:");
	scanf("%d",&b);
	if(a==b)
	{
		printf("the given two values are equal:%d,%d",a,b);
	}
	else
	printf("the given two numbers are not equal");
}
