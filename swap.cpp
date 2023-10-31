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
 	for(int i=0;i<n-1;i+=2)
	 {
		int a=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=a;
		
	}
		for (int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
	

