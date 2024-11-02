#include<iostream>
using namespace std;

int search(int arr[], int l, int r, int x)
{
	if(r>=l)
	{
		int mid=l+(r-l)/2;
		
		// element at mid
		if(arr[mid]==x)
		return mid;
		
		// element in left subarray
		if(arr[mid]>x)
		return search(arr,l,mid-1,x);
		
		// element in right subarray
		return search(arr,mid+1,r,x);
		
	}
	return -1;
}

int main()
{
	int arr[]={2,10,12,15,18,20};
	int size=6;
	int result=search(arr,0,size-1,20);
	if(result==-1)
	{
		cout<<"Element not found"<<endl;
		
	}
	else
	{
		cout<<"Element found at index: "<<result<<endl;
	}
}
