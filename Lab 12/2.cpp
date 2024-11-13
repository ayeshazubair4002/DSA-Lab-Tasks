#include<iostream>
using namespace std;

class node{
	public:
	char data;
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
	
	t.root = new node('A');
    t.root->left = new node('B');
    t.root->right = new node('C');
    t.root->left->left = new node('D');
    t.root->left->right = new node('E');
    t.root->right->left = new node('F');
    t.root->right->right = new node('G');
    
    cout<<"Inorder:"<<endl;
    t.inorder(t.root);
    cout<<endl;
    cout<<endl;
    
    cout<<"Preorder:"<<endl;
    t.preorder(t.root);

}
