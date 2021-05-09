#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100];
int i,n,low,high=n-1,mid,val;
clrscr();
printf("enter numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("numbers you entered are : ");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
printf("enter the value you want to search: ");
scanf("%d",&val);
}
	while(low<=high)
	{
	mid=low+high/2;
	if(arr[mid]==val)
	{
	printf("number found at %d position",mid+1);
	break;
	}}
getch();
}