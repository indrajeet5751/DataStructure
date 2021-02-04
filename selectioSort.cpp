#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
    int min,pos,i,j;
    for(i=0;i<n;i++)
    {
        min=arr[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                pos=j;
            }
        }
        arr[pos]=arr[i];
        arr[i]=min;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sorted elements are: "<<endl;
    SelectionSort(arr,n);
    for(int k=0;k<n;k++)
        cout<<arr[k]<<" ";
        
    return 0;
}

