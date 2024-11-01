#include<iostream>
using namespace std;
const int size=5;
class queue{
	public:
	int array[size];
	int front;
	int rear;
	int count;
	
	queue()
	{
		front=0;
		rear=0;
		count=0;
	}
	
	bool empty()
	{
		if(count==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool full()
	{
		if(count==size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void enqueue()
	{
		cout<<"Enter value: ";
		int value;
		cin>>value;
		if(count<size)
		{
			array[rear]=value;
			rear=(rear+1)%size;
			count++;
		}
		else
		{
			cout<<"Queue full";
		}
	}
	
	void dequeue()
	{
		if(count==0)
		{
			cout<<"Queue empty"<<endl;
		}
		else
		{
			int value=array[front];
			front= (front+1)%size;
			count--;
			cout<<"Dequeued value: "<<value<<endl;
		}
	
	}
	
	void getfront()
	{
		if(count!=0)
		{
			cout<<"Value at front: "<<array[front]<<endl;
		}
		else
		{
			cout<<"Empty"<<endl;
		}
	}
	
	void countElements()
	{
		cout<<"Total queue elements:"<<count<<endl;
	}
	

	void display() {
        if (!empty()) {
            cout << "Queue elements: ";
            for (int i = front; i != rear; i = (i + 1) % size) {
                cout << array[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Queue is empty" << endl;
        }
    }
};

int main()
{
	queue q;
	int c;
	do
	{
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. Get front"<<endl;
		cout<<"4. Empty"<<endl;
		cout<<"5. Full"<<endl;
		cout<<"6. Display"<<endl;
		cout<<"7. Count of elements"<<endl;
		cout<<"8. Exit"<<endl;
		cout<<endl;
		cout<<"Enter:";
		cin>>c;
		
		switch(c)
		{
			case 1:
			q.enqueue();
			cout<<endl;
			break;
			case 2:
			q.dequeue();
			cout<<endl;
			break;
			case 3:
			q.getfront();
			break;
			case 4:
			cout<<"Empty?(1 for true and 0 for false) : "<<q.empty();
			cout<<endl;
			break;
			case 5:
			cout<<"Full?(1 for true and 0 for false) : "<<q.full();
			cout<<endl;
			break;
			case 6:
			cout<<"Displaying...."<<endl;
			q.display();
			break;
			case 7:
			q.countElements();
			break;
			
			
			
			
		}
	}
	while(c!=8);
}
