#include<iostream>
using namespace std;

double factorial(int n)
{
	if(n==0)
	return 1;
	
	else
	return n*factorial(n-1);
}

int main()
{
	cout<<"Enter number to find factorial:";
	int num;
	cin>>num;
	
	int r=factorial(num);
	if(r==1)
	{
	    cout<<"Factorial cannot be calculated"<<endl;
	}
	else
	{
		cout<<"Factorial of number "<<num<<" is : "<<r<<endl;
	}

	
}
