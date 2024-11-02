#include<iostream>
using namespace std;

int linear(double arr[], int size, int x)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==x)	
		{
			cout<<"Index:"<<i<<endl;
			return x;
		}
	}
	return -1;
}

int main()
{
	double arr[10]={13579,26791 ,26792, 33445 ,55555,62483, 77777, 79422, 85647, 93121 };
	cout<<"Ticket numbers:"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	cout<<"Enter this week's winning ticket number: ";
	double n;
	cin>>n;
	int r=linear(arr,10,n);
	if(r==-1)
	{
		cout<<"Ticket number not found!"<<endl;
	}
	else
	{
		cout<<"Ticket number found: "<<r<<endl;
	}
}
