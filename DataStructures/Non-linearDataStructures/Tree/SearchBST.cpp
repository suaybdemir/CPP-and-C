#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *left,*right;
};

class BST{
	public:
		Node *root;
		BST()
		{
			root = NULL;
		}
		Node *insert(Node*,int);
		int search(int);
};

Node* BST::insert(Node*root,int value)
{
	if(root==NULL)
	{
		Node*newNode = new Node();
		newNode->data = value;
		newNode->left = NULL;
		newNode->right = NULL;
		
		root = newNode;
	}
	else if(value>=root->data)
	{
		root->right = insert(root->right,value);
	}
	else
	{
		root->left = insert(root->left,value);
	}
	return root;
}

int BST::search(int searchKey)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		if(temp->data==searchKey)
		{
			cout<<searchKey<<" found";
			return searchKey;
		}
		else if(searchKey< temp->data)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->right;
		}
	}
	cout<<searchKey<<" not found";
	return -1;
	
}

int main(void)
{
	BST tree;
	string ch="yes";
	int num,searchKey;
	cout<<"Enter the key number:\n";
	cin>>num;
	tree.root = tree.insert(tree.root,num);
	do
	{
		cout<<"Do you want to create another junction?\n";
		cin>>ch;
		if(ch.compare("yes")==0)
		{
			cout<<"Enter the key number:\n";
			cin>>num;
			tree.root = tree.insert(tree.root,num);
		}
		else
		{
			break;
		}
	}while(true);
	
	cout<<"Enter the key to be searched\n";
	cin>>searchKey;
	tree.search(searchKey);
	
	return 0;
}
