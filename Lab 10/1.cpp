#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *next;
	
};
class queue{
	public:
	node *front;
	node *rear;
	
	void enqueue(int value)
	{
		if(front==NULL)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=front;
			temp->next=rear;
			front=temp;
			rear=temp;
		}
		else
		{
			node *temp=new node;
			temp->data=value;
			temp->next=front;
			rear->next=temp;
			rear=temp;
		}
	}
	
	void display()
	{
		node *f=front;
		do
		{
			cout<<f->data<<" ";
			f=f->next;
		}
		while(f!=front);
	}
	
	void dequeue()
	{
		
	
		node *temp=front;
		node *temp1=front;
		
		if(front==NULL)
		{
			cout<<"List is empty"<<endl;
		}
		
		//1 node only
		if(front->next==front)
		{
			front=NULL;
			rear=NULL;
			delete temp;
			return;
		}
		
		while(temp1->next!=front)
		temp1=temp1->next;
		
		front=front->next;
		temp1->next=front;
		delete temp;
	}
		
	void front_element()
	{
		cout<<"Front: "<<front->data<<endl;
	}
	
	void rear_element()
	{
		cout<<"Rear: "<<rear->data<<endl;
	}
};
int main()
{
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.display();
	cout<<endl;
	
	q.dequeue();
	q.display();
	cout<<endl;
	
	q.dequeue();
	q.display();
	cout<<endl;
	
	q.enqueue(4);
	q.display();

	

}
