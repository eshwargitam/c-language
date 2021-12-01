#include<stdio.h>
main()
{
	int a;
	printf("give a number:");
	scanf("%d",&a);
	if(a==0)
	{
	
		printf("the given number is zero:%d",a);
	}
	else if(a>0)
	{
	printf("the given number is positive:%d",a);
	
	
    }
    else
    	printf("the given number is negative:%d",a);

}
