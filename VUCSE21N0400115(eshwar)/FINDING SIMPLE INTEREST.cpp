#include<stdio.h>
main()
{
	float P,T,R,SI;
	printf("enter the value for principle:");
	scanf("%f",&P);
	printf("enter the time:");
	scanf("%f",&T);
	printf("enter the value of rate of interest:");
	scanf("%f",&R);
	SI=P*T*R/100;
	printf("simple interest is:%f",SI);
}
