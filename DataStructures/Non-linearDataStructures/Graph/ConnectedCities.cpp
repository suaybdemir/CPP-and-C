#include <iostream>

using namespace std;

class Node{
	public:
		int vertex;
		int weight;
		Node *next;
};

void create(Node* head[])
{
	int v1,v2,weight,n;
	Node* newNode;
	Node* temp;
	cout<<"Enter the no. of connecting (one-way)roads:";
	cin>>n;
	
	for(int i =0 ; i<n ; i++)
	{
		cout<<"\nEnter the start node (city) and end node (city) in the connection "<<i+1<<":";
		cin>>v1>>v2;
		cout<<"\nEnter the distance (weight):";
		cin>>weight;
		
		newNode = new Node();
		newNode->vertex = v2;
		newNode->weight = weight;
		temp = head[v1];
		
		if(temp==NULL)
		{
			head[v1]=newNode;
		}
		else
		{
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next = newNode;
		}
	}
}

void display(Node*head[],int n)
{
	int v;
	int max = 0;
	int value = 0;
	int count = 0;
	cout<<"The distance between the connecting cities are:\n";
	
	for(v=0; v<n ; v++)
	{
		Node*adj=head[v];
		if(adj == NULL)
		{
			count++;
			cout<<v<<" - No connecting roads found\n";
			continue;
		}
		while(adj!=NULL)
		{
			cout<<v<<" -> "<<adj->vertex<<" Distance: "<<adj->weight<<endl;
			if(adj->weight>max)
			{
				max = adj->weight;
				value = v;
			}
			adj = adj->next;
		}
	}
	if(count==n)
	{
		cout<<"\nNo city has any connecting road.";
		return;
	}
	cout<<endl;
	cout<<value<<" is the city with the highest connecting roads.";
	
}

int main(void)
{
	int n;
	Node*head[50];
	cout<<"Enter the no. of cities:";
	cin>>n;
	for(int v = 0; v<n ; v++)
	{
		head[v]=NULL;
	}
	
	create(head);
	display(head,n);
	
	return 0;
}
