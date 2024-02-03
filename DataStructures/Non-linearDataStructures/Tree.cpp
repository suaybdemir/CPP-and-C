#include <iostream>

using namespace std;

class TreeNode{
	public:
		int data;
		TreeNode *left,*right;
};

TreeNode* createNewNode(int value)
{
		TreeNode*newNode=new TreeNode;
		newNode->data = value;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
}

TreeNode* insert(TreeNode *root,int value)
{
	if(root==NULL)
	{
		root = createNewNode(value);
	}
	else if(value>= root->data)
	{
		root->right = insert(root->right,value);
	}
	else
	{
		root->left = insert(root->left,value);
	}	
	
	return root;
}

void treeSearch(TreeNode *node,int value)
{
	if(node==NULL)
	{
		cout<<"not found the element "<<endl;
	}
	
	
	if(node->data==value)
	{
		cout<<"found the element "<<value<<endl;
	}
	else if(value<node->data)
	{
		cout<<"move to left "<<value<<endl;
		treeSearch(node->left,value);
	}
	else
	{
		cout<<"move to right descendant "<<value<<endl;
		treeSearch(node->right,value);
	}

}

void preOrder(TreeNode *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
	
}

void inOrder(TreeNode *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

void postOrder(TreeNode *root)
{	
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

int main(void)
{
	TreeNode *root = NULL;
	
	root = insert(root,150);
	root = insert(root,140);
	root = insert(root,10);
	root = insert(root,53);
	root = insert(root,1);
	root = insert(root,200);
	root = insert(root,80);
	
	treeSearch(root,1);
	
	cout<<"Preorder: ";
	preOrder(root);
	
	cout<<"\nInorder: ";
	inOrder(root);
	
	cout<<"\nPostorder: ";
	postOrder(root);
	
	return 0;
}
