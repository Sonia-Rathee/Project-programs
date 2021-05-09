#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
int a,b,add,sub,mul,div;
clrscr();
do
{
printf("1. add \n");
printf("2. sub\n");
printf("3. mul\n");
printf("4. div\n");
printf("0. exit\n");
{
printf("enter your choice: ");
scanf("%d",&ch);
}
if(ch>=1 && ch<=4)
{
printf("enter two numbers: ");
scanf("%d%d", &a,&b);
switch(ch)
{
case 1:
printf("you choose add");
getch();
clrscr();
add=a+b;
printf("%d",add);
break;
case 2:
printf("you choose sub");
break;
case 3:
printf("you choose mul");
break;
case 4:
printf("you choose div");
break;
case 0:
break;
default:printf("invalid choice..");
}}
while(ch!=0);
getch();
}


