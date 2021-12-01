#include<stdio.h>
main()
{
	int s,area,perimeter;
	printf("enter the value for the side of the square:");
	scanf("%d",&s);
	area=s*s;
	perimeter=4*s;
	printf("\n area of square is:%d",area);
	printf("\n perimeter of square is:%d",perimeter);
}
