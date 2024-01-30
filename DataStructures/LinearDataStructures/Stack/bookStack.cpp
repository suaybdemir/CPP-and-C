#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
	char box[5][10];
	char bkNo[10];
	int ch=0,top = -1,i=0;
	do{
		cout<<"\n1. Insert a book in the box";
		cout<<"\n2. Delete a book from the box";
		cout<<"\n3. Display book box";
		cout<<"\n4. Exit";
		
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:
				if(top>=4)
				{
					cout<<"\nThe box is full\n";
				}
				else
				{
					cout<<"\nEnter the book no : \n";
					cin>>bkNo;
					strcpy(box[++top],bkNo);
				}
				break;
			case 2:
				if(top==-1)
				{
					cout<<"\nThe book is deleted from the box:"<<box[top];
					top--;
				}
				else
				{
					cout<<"\nThe book is deleted from the box:"<<box[top];
					top--;
				}
				break;
			case 3:
				if(top==-1)
				{
					cout<<"\nThe box is empty";
				}
				else
				{
					cout<<"\nThe books in the box:";
					
					for(i=top; i>=0; i--)
					{
						cout<<box[i]<<" ";
					}
				}
				break;
			case 4:
				return false;
				
			default:
				cout<<"Invalid option\n";
		}
	}while(true);
	
	return 0;
}
