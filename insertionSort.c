#include<stdio.h>
void insertionSort(int arr[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key ;
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
	insertionSort(arr,n);
	printf("\n after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
