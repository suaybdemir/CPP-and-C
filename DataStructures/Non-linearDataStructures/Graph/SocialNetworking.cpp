#include <iostream>

using namespace std;

class Graph{
	public:
		int no;
		int aMatrix[100][100];
		Graph()
		{
			no = 0;
		}
		void addEdge(int,int);
		void display();
};

void Graph::addEdge(int row, int col) {
    aMatrix[row - 1][col - 1] = 1;  
    aMatrix[col - 1][row - 1] = 1;  
}

void Graph::display()
{
	cout<<"\nThe representation of SocialNet users:\n";
	cout<<endl;
	for(int i = 0 ; i<no ; i++)
	{
		for(int j=0 ; j<no ; j++)
		{
			if(aMatrix[i][j]!=0)
			{
				cout<<j+1<<" ";
			}
			else
			{
				cout<<"0 ";
			}
			
		}
		cout<<endl;
	}

	cout<<"\nThe friends' list of all users:\n";
	for(int i = 0; i<no ; i++)
	{
		cout<<"\n"<<i+1<<"->";
		int count = 0;
		for(int j= 0; j<no ; j++)
		{
			if(aMatrix[i][j]!=0)
			{
				cout<<j+1<<" ";	
			}
			else
			{
				count++;
			}	
		}
		if(count==no)
		{
			cout<<"0";
		}
	}
}
int main(void)
{
	Graph graph;
	cout<<"Enter the no. of users: ";
	cin>>graph.no;
	
	int connection;
	cout<<"Enter the no. of connections:";
	cin>>connection;
	for(int i=0 ; i<connection ; i++)
	{
		int v1,v2;
		cout<<"Enter the start node and end node in connection "<<i+1<<":\n";
		cin>>v1>>v2;
		
		graph.addEdge(v1,v2);
	}
	
	graph.display();
	
	return 0;
}
