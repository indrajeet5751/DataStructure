#include<stdio.h>
void bubbleSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
}

int main()
{
	int i,j,n;
	int arr[n];
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("\n enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
	printf("\n after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
