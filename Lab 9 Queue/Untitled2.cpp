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
			temp->next=NULL;
			rear->next=temp;
			rear=temp;
		}
	}
	
	void display()
	{
		node *f=front;
		while(f!=NULL)
		{
			cout<<f->data<<" ";
			f=f->next;
		}
	}
	
	void dequeue()
	{
		if(front==NULL)
		{
			cout<<"Empty"<<endl;
		}
		else
		{
			node *temp=new node;
			temp=front;
			front=front->next;
			delete temp;
		}
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
	q.front_element();
	cout<<endl;
	q.rear_element();
	cout<<endl;
	q.display();
	cout<<endl;
	q.dequeue();
	q.display();

}
