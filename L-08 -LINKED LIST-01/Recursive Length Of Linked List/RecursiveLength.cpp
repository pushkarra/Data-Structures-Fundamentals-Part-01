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

int recursiveLength(Node *head){
	Node *temp = head;
	int length = 0;
	if(temp == NULL){
		return 0;
	}
	else{
		return 1+recursiveLength(temp->next);
	}
}


int main(){
	
	Node *head = modifiedGetInput();
	int length = recursiveLength(head);
	cout<<endl<<length;
}