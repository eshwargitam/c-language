#include<stdio.h>
#include<math.h>
main()
{
	float x,y;
	printf("give a value:");
	scanf("%f",&x);
	printf("give a value:");
	scanf("%f",&y);
	printf("a:%f",sqrt(((x*x+y*y)/(x*x+1))));
	printf("\nb:%f",sqrt(((x*x+y*y)/(x*x-y*y))));
}
