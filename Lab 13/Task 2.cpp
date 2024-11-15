#include<iostream>
using namespace std;

class node{
	public:
	int IDnumber;
	string name;
	double salary;
	node *left;
	node *right;
	
	node()
	{
		left=NULL;
		right=NULL;
	}
	
	node(int id, string n, double s)
	{
		IDnumber=id;
		name=n;
		salary=s;
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
	
	void insert(node *&temp, int id, string n, double s)
	{
		if(temp==NULL)
		{
			temp=new node;
			temp->IDnumber=id;
			temp->name=n;
			temp->salary=s;
			temp->left=NULL;
			temp->right=NULL;
		}
		
		else if(id<temp->IDnumber)
		insert(temp->left,id,n,s);
		
		else
		insert(temp->right,id,n,s);
	}
	
	void inorder(node *ptr)
	{
		if(ptr!=NULL)
		{
			inorder(ptr->left);
			cout<<ptr->IDnumber<<" ";
			cout<<ptr->name<<" ";
			cout<<ptr->salary<<" ";
			cout<<endl;
			inorder(ptr->right);
		}
	}
	
	
	
	void postorder(node *ptr)
	{
		if(ptr!=NULL)
		{
			postorder(ptr->left);
			postorder(ptr->right);
			cout<<ptr->IDnumber<<" ";
			cout<<ptr->name<<" ";
			cout<<ptr->salary<<" ";
			cout<<endl;
		}
	}
	
	void preorder(node *ptr)
	{
		if(ptr!=NULL)
		{
			cout<<ptr->IDnumber<<" ";
			cout<<ptr->name<<" ";
			cout<<ptr->salary<<" ";
			cout<<endl;
			preorder(ptr->left);
			preorder(ptr->right);
			
		}
	}
	
	bool search(node *temp,int num)
	{
		if(temp==NULL)
		return false;
		
		else if(temp->IDnumber==num)
		return true;
		
		else if(temp->IDnumber<num)
		search(temp->right,num);
		
		
		else if(temp->IDnumber>num)
		search(temp->left,num);
	}
	
	node* findMin(node* temp) {
        while (temp && temp->left != NULL) {
            temp = temp->left;
        }
        return temp;
    }

    node* deleteNode(node* temp, int id) {
        if (temp == NULL) {
            return temp;
        }

        if (id < temp->IDnumber) {
            temp->left = deleteNode(temp->left, id);
        } else if (id > temp->IDnumber) {
            temp->right = deleteNode(temp->right, id);
        } else {
            if (temp->left == NULL) {
                node* rightChild = temp->right;
                delete temp;
                return rightChild;
            } else if (temp->right == NULL) {
                node* leftChild = temp->left;
                delete temp;
                return leftChild;
            }

            node* minNode = findMin(temp->right);
            temp->IDnumber = minNode->IDnumber;
            temp->name = minNode->name;
            temp->salary = minNode->salary;
            temp->right = deleteNode(temp->right, minNode->IDnumber);
        }
        return temp;
    }
	
	
	
	
		
	
	
};

int main()
{
	BST b;
	
	b.insert(b.root,1,"Alex",10000);
	b.insert(b.root,2,"Sara",15000);
	b.insert(b.root,0,"S",15000);
	

	
	b.inorder(b.root);
	cout<<endl;
	
	b.preorder(b.root);
	cout<<endl;
	
	b.postorder(b.root);
	cout<<endl;
	cout<<"Searching for ID 1: (1 found, 0 not in the list) ";
	cout<<b.search(b.root,1);
	cout<<endl;
	
	cout<<"Deleting ID number 0:";
	b.deleteNode(b.root,0);
	cout<<endl;
	
	b.inorder(b.root);
	cout<<endl;
	
	b.preorder(b.root);
	cout<<endl;
	
	b.postorder(b.root);
	cout<<endl;
	
	
	

	
	
	
	
   
    


    
    
    
    

}
