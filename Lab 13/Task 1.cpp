#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *left;
	node *right;
	
	node()
	{
		left=NULL;
		right=NULL;
	}
	
	node(int item)
	{
		data=item;
		left=NULL;
		right=NULL;
	}
	
};

class BST{
	public:
	node *root;
	
	BST()
	{
		root=NULL;
	}
	
	void insert(node *&temp, int num)
	{
		if(temp==NULL)
		{
			temp=new node;
			temp->data=num;
			temp->left=NULL;
			temp->right=NULL;
		}
		
		else if(num<temp->data)
		insert(temp->left,num);
		
		else
		insert(temp->right,num);
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
	
	void preorder(node *ptr)
	{
		if(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			preorder(ptr->left);
			preorder(ptr->right);
		}
	}
	
	
};

int main()
{
	BST b;
	
	
    b.insert(b.root, 12);
    b.insert(b.root, 7);
    b.insert(b.root, 9);
    b.insert(b.root, 10);
    b.insert(b.root, 22);     
    b.insert(b.root,24);
    b.insert(b.root,30);
    b.insert(b.root,18);
    b.insert(b.root,3);
    b.insert(b.root,14);
    b.insert(b.root,20);


    

    cout << "Inorder traversal: ";
    b.inorder(b.root);
    cout<<endl;
    
    cout<<"Postorder:";
    b.postorder(b.root);
    cout<<endl;
    
    cout<<"Preorder:";
    b.preorder(b.root);
    cout<<endl;
    
    


    
    
    
    

}