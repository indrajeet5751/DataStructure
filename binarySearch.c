#include<stdio.h>
int main()
{
	int i,key,low,high,mid,flag;
	int arr[]={10,15,25,35,63,98};
	
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("\n size of an array is=%d",n);
    printf("\n enter element you want to search:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
	
     mid=(low+high)/2;
     
     if(key<arr[mid])
       {
       	high=mid-1;
	   }
	 else if(key>arr[mid])
	   {
	   	low=mid+1;
	   }
	 else if(key==arr[mid])
	   {
		printf("element fount at %d",mid);
		flag=1;
		break;
	   }
	
    }
    if(flag!=1)
    {
	printf("element not found.");
	 
	}
}
