#include<stdio.h>
#include<conio.h>
main()
{
	int ch;
	printf("the character:");
	ch=getchar();
	ch++;
	putchar(ch);
	printf("\n");
		printf("the character:");
		fflush(stdin);	
		ch=getchar();
		ch++;
	putchar(ch);
	printf("\n");
		printf("the character:");
		fflush(stdin);
	ch=getchar();
	ch++;
	putchar(ch);
		
}
