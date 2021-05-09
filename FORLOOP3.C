#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='A';
	int i;
	clrscr();
	for(i=1;i<=16;i++)
		{
		printf("%4c",ch);

		if(i%4==0)
		{
		ch++;
		}
		printf("\n");
		}
getch();
}
