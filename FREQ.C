int main()
{
	char str[100];
	int i;


	int freq[256]={0};

	printf("\n enter any string: ");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
	freq[str[i]]++;
	}

	for(i=0;i<256;i++)
	{
	if(freq[i]!=0)
	{
	printf("character '%c'occurs %d times \n", i,freq[i]);
	}

	}
getch();
}