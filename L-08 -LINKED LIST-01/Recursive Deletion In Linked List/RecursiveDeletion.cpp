// Coding Problem
// Problem Statement: Delete node recursively
// Problem Level: EASY
// Problem Description:
// Given a singly linked list of integers and position 'i', delete the node present at the 'i-th' position in the linked list recursively.
// Note :
// Assume that the Indexing for the linked list always starts from 0.

// No need to print the list, it has already been taken care. Only return the new head to the list.

// input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case or query contains the elements of the singly linked list separated by a single space.

// The second line of input contains a single integer depicting the value of 'i'.

// Remember/Consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

// Output format :
// For each test case/query, print the elements of the updated singly linked list.

// Output for every test case will be printed in a seperate line.

// Constraints :
// 1 <= t <= 10^2
// 0 <= M <= 10^5
// Where M is the size of the singly linked list.
// 0 <= i < M

// Time Limit:  1sec

// Sample Input 1 :
// 1
// 3 4 5 2 6 1 9 -1
// 3

// Sample Output 1 :
// 3 4 5 6 1 9




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