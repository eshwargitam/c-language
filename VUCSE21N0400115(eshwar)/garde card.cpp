#include<stdio.h>
main()
{
	int a;
	printf("give the score of the student:");
	scanf("%d",&a);
	if(a>=90)
	{
		printf("the is grade A");
	}
	else if(a>=80)
	{
		printf("the grade is B");
    }
    else if(a>=70)
    {
    	printf("the grade is C");
    	
	}
	else if(a>=60)
	{
		printf("the grade is D");
	}
	else if(a>=50)
	{
		printf("the grade id E");
	}
	else
	printf("sorry the student should be held in the same class");
}
