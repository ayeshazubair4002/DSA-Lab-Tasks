#include<iostream>
using namespace std;

int linearRecursive(int arr[], int size, int x)
{
	if(size==0)
	return -1;
	
	else if(arr[size-1]==x) //checks last element
	return size-1;
	
	return linearRecursive(arr, size-1, x);
}

int main()
{
	int arr[]={9,11,16,-1,6};
//	int s=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	cout<<"Enter element that you want to search:";
	int n;
	cin>>n;
	
	int r=linearRecursive(arr,5,n);
	if(r==-1)
	{
	
	cout<<"Element is not present in the array."<<endl;
}
	else
	{
		cout<<"Element found at index: "<<r<<endl;
	}
}
