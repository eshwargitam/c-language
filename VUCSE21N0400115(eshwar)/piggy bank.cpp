#include<stdio.h>
main()
{
	int tens,twenties,fifties,hun,fh,a,b,c,d,e,sum;
	printf("the no.of notes",tens);
	scanf("%d",&tens);
	a=tens*10;
	printf("the no.of notes",twenties);
	scanf("%d",&twenties);
	b=twenties*20;
	printf("the no.of notes",fifties);
	scanf("%d",&fifties);
	c=fifties*50;
	printf("the no.of notes",hun);
	scanf("%d",&hun);
	d=hun*100;
	printf("the no.of notes",fh);
	scanf("%d",&fh);
	e=fh*500;
	sum=a+b+c+d+e;
	printf("the piggy bank total:%d",sum);
}
