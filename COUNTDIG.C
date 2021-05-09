#include<stdio.h>
#include<conio.h>
void main()
{
long long n;
int count=0;
printf("enter the integer");
scanf("%ld",&n);
while(n!=0)
{
n/=10;
count++;
}
printf("number of digit: %d", count);

getch();
}
