#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	
	
	Node(int data){
		this->data = data;
		next = NULL;
	}
};

Node *modifiedGetInput(){
	int data;
	cin>>data;
	
	Node* head = NULL;
	Node* tail = NULL;
	
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


void print(Node *head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}



void midpoint(Node* head){    
	
	Node *temp = head;
	Node *fast = temp->next;     // creating fast pointer that will start from 2nd element
	Node *slow = temp;           // creating slow pointer that will start from 1st element
	
	while(fast->next != NULL && fast != NULL){
		fast = fast->next->next;                    // fast pointer will move 2 steps at single time
		slow = slow->next;                          // slow pointer will move 1 steps at single time
	}
	
	cout<<endl<<slow->data;                         // printing the slow pointer because it points to mid element
}
	


 int main(){
 	Node* head = modifiedGetInput(); 
  	print(head);
  	
  	midpoint(head);
 	
 }