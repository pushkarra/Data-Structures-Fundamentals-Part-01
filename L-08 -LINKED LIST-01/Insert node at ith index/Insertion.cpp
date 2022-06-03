#include <bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node *next;           
		
	Node(int data){           
		this ->data = data;
		next = NULL;
	}
};


Node* modifiedGetInput(){                      
	int data;
	cin>>data;
	
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data != -1){
		Node *newNode = new Node(data); 
		if(head == NULL){               
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
		cin>>data;                     
	}
	
	return head;                       
}


Node *insertNode(Node *head, int index , int data){
	
	Node *temp = head;
	Node *newNode = new Node(data);
	int counter = 0;
	
	if(index == 0){                             // special case for insertion at 0th index
		newNode -> next = head;
		head = newNode;
		return head;
	}
	
	while(temp != NULL && counter < index-1){  // temp != NULL because we want to safe it from wrong index numbers
		temp = temp -> next;
		counter++;
	}
	
	if(temp != NULL){
		Node *a = temp -> next;               // Ist approach with use of third node variable
		temp -> next = newNode;
		newNode -> next = a;
	}
	
	
//	IInd approach                              simpler approach without the use of third node variable
//	newNode -> next = temp -> next;
//	temp -> next = newNode;
	
	return head;
		
}



void print (Node *head){
	Node *temp = head;       
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}


int main(){
	
	int index,data;
	Node *head = modifiedGetInput();
	print(head);
	cout<<endl;
	cin>>index>>data;
	head = insertNode(head,index,data);
	print(head);
}