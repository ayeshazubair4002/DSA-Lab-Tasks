#include<iostream>
using namespace std;


class queue{
	public:
	int rear;
	int front;
	int size;
	int *arr;

	
	queue()
	{
		rear=-1;
		front=0;
		size=100;
		arr=new int [size];
			
	}
	
	void empty()
	{
	
	if (rear==-1)
	{
		cout<<"Empty"<<endl;
	}
	else
	{
		cout<<"Elements are present"<<endl;
	}
}

	void enqueue(int value)
	{
		if(rear<size)
		{
			rear++;
			arr[rear]=value;
		}
		else
		{
			cout<<"Overflow"<<endl;
		}
	}
	
	void dequeue()
	{
		if(rear==-1)
		{
			cout<<"Underflow"<<endl;
		}
		else
		{
			front++;
		}
		
	}
	
	void rear_element()
	{
		cout<<"Current rear element: "<<arr[rear]<<endl;
	}
	
	void front_element()
	{
		cout<<"Current front element: "<<arr[front]<<endl;
	}
	
	void display()
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	
};

int main()
{
	queue q;
	q.empty();
	cout<<endl;
	q.enqueue(5);
	
	q.rear_element();
	q.enqueue(4);
	cout<<endl;
	q.display();
	
	
	
}
