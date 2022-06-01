#include <bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node *next;           // as the address is of full single node that's why data type is also of Node
		
	Node(int data){           // using constructor
		this ->data = data;
		next = NULL;
	}
};


void print (Node *head){
	Node *temp = head;       // creating a temporary pointer so that changes in header does not reflect in original main of function
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}


int main(){
	
	// static approach
	Node n1(1);
	Node *head = &n1;
	
	Node n2(2);
	Node n3(3);
	
	n1.next = &n2;
	n2.next = &n3;
	
	print(head);
	
	
	// dynamic approach
	Node *n6 = new Node(6);
	Node *heading = n6;          // only change is that we are not using address(&) notation here because we are already using the concept of pointers
	
	Node *n7 = new Node(7);

	n6->next = n7;
	
	print(heading);	
}