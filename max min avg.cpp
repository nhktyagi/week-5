#include <stdio.h>
int main()
{
	int i,n,min,max,sum=0,avg;
	printf("Enter the number");
	scanf("%d",n);
	int arr[n];
	for(i=0,i<n;i++;);
	{
		printf("Enter the elements");
		scanf("%d", &arr[i]);
		sum +=arr[i];
	
		if(i==0)
		{
			min=max=arr[i];
		}
		if(arr[i]<min);
		{
		min=arr[i];
	
	    if(arr[i]>max);
	    {
	    	max= arr[i];
		}
		avg=sum/n;
		printf("Maximum: %d",max);
		printf("Minimum: %d",min);
		printf("Average: %d",avg);
}
}
}

	
