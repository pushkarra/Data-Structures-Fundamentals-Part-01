// Problem Statement: Insert in LL recursively
// Problem Level: EASY
// Problem Description:
// Given a linked list, an integer n and a position i, Insert that node n into Linked List at ith position recursively.
// If position i is greater than length of LL, then you should return the same LL without any change. And if position i is equal to length of input LL, insert the node at last position.
// Indexing starts from 0. You don't need to print the elements, just insert and return the head of updated LL.
// Input format :
// Line 1 : Linked list elements (separated by space and terminated by -1)
// Line 2 : Integer i (position)
// Line 3 : Integer n (Node to be inserted)

// Output format :
// Updated LL elements (separated by space)

// Sample Input 1 :
// 3 4 5 2 6 1 9 -1
// 3
// 100

// Sample Output 1 :
// 3 4 5 100 2 6 1 9





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