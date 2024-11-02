#include<iostream>
using namespace std;

double sum(int arr[],int size)
{
	if(size<=0)
	return 0;
	
	else
	{
		
		return (sum(arr, size - 1) + arr[size - 1]); 


	}
}

int main()
{
	int arr[6]={1,2,3,4,5,6};
	int r=sum(arr,6);
	
	if(r==0)
	{
		cout<<"Sum impossible"<<endl;
	}
	else
	{
		cout<<"Sum is : "<<r<<endl;
	}
	
}
