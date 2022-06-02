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


Node *modifiedGetInput(){                      // Modified approach and it takes o(n) time and efficient too.
	int data;
	cin>>data;
	
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data != -1){
		Node *newNode = new Node(data); // creation of a new node
		if(head == NULL){               // giving the head and tail its appropriate values
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
		cin>>data;                     // taking the input
	}
	
	return head;                       // returning the head value so that we can print and access LL.
}


/*
Node *getInput(){                      // simpler approach and it takes o(n2)time and not efficient too.
	int data;
	cin>>data;
	
	Node *head = NULL;
	
	while(data != -1){
		Node *newNode = new Node(data); // creation of a new node
		if(head == NULL){               // giving the head its appropriate value
			head = newNode;
		}
		else{
			Node *temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;
		}
		cin>>data;                     // taking the input
	}
	
	return head;                       // returning the head value so that we can print and access LL.
}
*/


void print (Node *head){
	Node *temp = head;       
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}



int main(){
	
	Node *head = modifiedGetInput();
	print(head);
}