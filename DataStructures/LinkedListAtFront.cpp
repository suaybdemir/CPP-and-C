#include <iostream>

using namespace std;


class Node{
	public:
		int data;
		Node * next;
};

class LinkedList{
	public:
		Node *head,*tail;
			LinkedList(){
				head = NULL;
				tail = NULL;
			}
			
	void insertNodeAtFront(int value){
		Node *newNode = new Node;
		newNode ->data = value;
		newNode ->next = NULL;
		if(head==NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else{
			newNode ->next = head;
			head = newNode;
		}
	}
};

int main(void){
	LinkedList ist;
	
	ist.insertNodeAtFront(40);
	ist.insertNodeAtFront(30);
	ist.insertNodeAtFront(20);
	ist.insertNodeAtFront(10);
	return 0;
}



