#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],n,i,mid,val,low,high;

	clrscr();

		printf("enter size of array: ");
		scanf("%d",&n);


		for(i=0;i<n;i++)
		{
		printf("\n enter element");
		scanf("%d",&arr[i]);
		}

		for(i=0;i<n;i++)
		{
		printf("%d",arr[i]);
		 }
		printf("\n enter the value to be searched : " );
		scanf("%d",&val);

	       low=arr[0];
	       high=arr[(n-1)];


		while (low<=high)

		{
			mid=(low+high)/2;

		if(arr[mid]==val)
			{
			printf("\n number found at %d position: ",mid+1);

		       break;
			}
		 else if(arr[mid]<val)
			{
				low=mid+1;
			}
		 else if(arr[mid]>val)
			{
				high=mid-1;

			}

		    }
		 if(low>high)
		 {
		 printf("number is not in list");
		 }



		 getch();

}

