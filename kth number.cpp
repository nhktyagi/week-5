#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}

		
	for(int i=0;i<n-i;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			int a=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=a;
			
			}
		}	
		printf("The array is:");}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);}
		int l=sizeof(arr)/sizeof(arr[0]);
		int k;
		printf("enter k");
		scanf("%d",&k);
		
		int b,c;
		b=arr[k-1];
		c=arr[l-k];
		printf("%d\n",b);
		printf("%d",c);
		
		
	
	
}


