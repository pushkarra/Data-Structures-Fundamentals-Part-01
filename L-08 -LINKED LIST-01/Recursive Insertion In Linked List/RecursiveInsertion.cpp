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


Node *recursiveInsertion(Node *temp, Node *newNode, Node *head, int i, int j){
	
	
	if(i == 0){
		newNode->next = temp;
        temp = newNode;
        return temp;
	}

	if(temp != NULL && j < i-1){
		recursiveInsertion(temp->next, newNode,head, i-1, j++);
	}
	else{
		if(temp != NULL){
			newNode -> next = temp -> next;
			temp -> next = newNode;
			return head;
		}
		else{
			return head;
		}	
	}
	
}





int main(){
	
	int data, index, j=0;
		
	Node *head = modifiedGetInput();
	cin>>index>>data;
	Node *newNode = new Node(data);
	head = recursiveInsertion(head,newNode,head,index,j);
    print(head);
}