#include<stdio.h>
main()
{
	int a;
	printf("give a value:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("it is an even number:%d",a);
	}
	else
	printf("it is an odd number:%d",a);
}

