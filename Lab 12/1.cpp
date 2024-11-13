#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *right;
	node *left;
	
	node(int value)
	{
		data=value;
		left=NULL;
		right=NULL;
		
	}
};

class tree{
	public:
	
	node *root;
	
	void preorder(node *ptr)
	{
		if(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			preorder(ptr->left);
			preorder(ptr->right);
		}
	}
	
	void inorder(node *ptr)
	{
		if(ptr!=NULL)
		{
			inorder(ptr->left);
			cout<<ptr->data<<" ";
			inorder(ptr->right);
		}
	}
	
	void postorder(node *ptr)
	{
		if(ptr!=NULL)
		{
			postorder(ptr->left);
			postorder(ptr->right);
			cout<<ptr->data<<" ";
		}
	}
	
};

int main()
{
	tree t;
	
	t.root = new node(1);
    t.root->left = new node(2);
    t.root->right = new node(3);
    t.root->left->left = new node(4);
    t.root->left->right = new node(5);
    t.root->right->left = new node(6);
    t.root->right->right = new node(7);
    
    cout<<"Inorder:"<<endl;
    t.inorder(t.root);
    cout<<endl;
    cout<<endl;
    
    cout<<"Preorder:"<<endl;
    t.preorder(t.root);

}
