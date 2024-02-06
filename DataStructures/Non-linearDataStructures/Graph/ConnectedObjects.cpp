#include <iostream>

using namespace std;

class Graph{
	public:
		int col;
		int row;
		int aMatrix[100][100];
		Graph()
		{
			col=0;
			row=0;
		}
		void addEdge();
		void display();
		void findConnection(int arr[][100],int i,int j);
};

void Graph::addEdge()
{
	cout<<"Enter the matrix\n";
	for(int i=0 ; i<row ; i++ )
	{
		for(int j = 0 ; j<col ; j++)
		{
			cin>>aMatrix[i][j];
		}
	}
}

void Graph::display()
{

	int count = 0;
	
	for(int i=0 ; i<row ; i++)
	{
		for(int j = 0; j<col ; j++)
		{
			if(aMatrix[i][j]==1)
			{
				count++;
				findConnection(aMatrix, i, j);
			}
		}
	}
	
	cout<<"Number of connected objects="<<count;
}

void Graph::findConnection(int arr[][100],int i,int j)
{
	arr[i][j]=0;
	 for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
            int nx = i + x;
            int ny = j + y;

            if (nx >= 0 && nx < row && ny >= 0 && ny < col && arr[nx][ny] == 1) {
                findConnection(arr, nx, ny);
            }
        }
    }
}

int main(void)
{
	Graph graph;
	cout<<"Enter the number of rows:\n";
	cin>>graph.row;
	cout<<"Enter the number of columns:\n";
	cin>>graph.col;
	
	if(graph.row<=0 || graph.col<=0)
	{
		cout<<"Invalid input";
	}
	else
	{
		graph.addEdge();
		graph.display();
	}
	
	
	return 0;
}
