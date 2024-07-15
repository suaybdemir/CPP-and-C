#include <iostream>

using namespace std;

#define COL 5

int main(void)
{
	int(*subject)[COL];
	int row_index,col_index,rowsize;
	cout<<endl<<"Enter the row size;";
	cin>>rowsize;
	subject = (int(*)[COL])new int (sizeof(int*)*rowsize);
	for(row_index = 0; row_index < rowsize;row_index++)
	{
		cout<<endl<<"Enter the array values:";
		for(col_index=0;col_index<COL ;col_index++)
		{
			cin>>subject[row_index][col_index];
		}
	}
	
	cout<<endl<<"Array Values are:";

	for(row_index=0;row_index<rowsize ;row_index++)
	{
		for(col_index=0;col_index<COL;col_index++)
		{
			cout<<subject[row_index][col_index];
		}
		cout<<endl;
	}

return 0;
}
