#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t1=0,t2=1,x;
	clrscr();
	printf("enter term: ");
	scanf("%d", &n);
	printf("%d" , t1);
	for(i=1;i<=n;i++)
	{
		printf("%d",t1);
		x=t1+t2;
		t1=t2;
		t2=x;
	}
	getch();
}