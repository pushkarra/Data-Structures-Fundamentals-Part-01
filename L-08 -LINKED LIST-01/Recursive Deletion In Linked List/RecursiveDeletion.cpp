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


Node *modifiedGetInput(){                      
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

void print (Node *head){
	Node *temp = head;       
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}


Node *recursiveDeletion(Node *temp, Node *head, int i, int j){
	
	
	if(i == 0){
		head = head->next;
        return head;
	}

	if(temp != NULL && j < i-1){
		recursiveDeletion(temp->next, head, i-1, j++);
	}
	else{
		if(temp != NULL){
			Node *a = temp -> next;
			Node *b = a -> next;
			temp -> next = b;
			return head;
		}
		else{
			return head;
		}	
	}
	
}



int main(){
	
	int index, j=0;
		
	Node *head = modifiedGetInput();
	cin>>index;
	head = recursiveDeletion(head,head,index,j);
    print(head);
}