#include<stdio.h>
main()
{
	int a=5,b=9,x;
	printf("before swaping a=%d,b=%d",a,b);
	x=a,a=b,b=x;
	printf("\nafter swaping a=%d,b=%d",a,b);
}
