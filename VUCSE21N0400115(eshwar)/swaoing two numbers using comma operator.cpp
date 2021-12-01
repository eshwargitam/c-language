#include<stdio.h>
main()
{
	int a=5,b=9,temp;
	printf("a=%d,b=%d",a,b);
	temp=a,a=b,b=temp;
	
	printf("after swaping a=%d,b=%d",a,b);

}
