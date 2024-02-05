#include <iostream>

using namespace std;

void addEdge(int aMatrix[][],int row,int col)
{
	aMatrix[row][col] = 1;
	aMatrix[col][row] = 1;
}

void display(int aMatrix[][4])
{
	for(size_t row = 0 ; row<4 ; row++)
	{
		for(size_t col = 0 ; col<4 ; col++)
		{
			cout<<aMatrix[row][col]<<" ";
		}
		cout<<"\n";
	}
}
int main(void)
{
	return 0;
}
