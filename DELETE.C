void main()
{
	int a[10],i,n,f=0;
	clrscr();
	printf("enter the number of elements: ");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
	printf("enter the values: ");
	scanf("\n%d",&a[i]);
	}
	printf("\n\t array will be: ");

	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}

	for(i=0;i<n;i++)
	{
	if(a[i]==val)
	{
	printf("number not found st %d position", i+1);
	f=1;
	}

	if(i==n)
	{
	printf("no not found");
	}
getch();
}
