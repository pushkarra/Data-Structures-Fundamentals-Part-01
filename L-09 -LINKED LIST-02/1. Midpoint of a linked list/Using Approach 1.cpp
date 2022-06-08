/*
Problem Statement: Midpoint LinkedList
Problem Level: EASY
Problem Description:
For a given singly linked list of integers, find and return the node present at the middle of the list.
Note :
If the length of the singly linked list is even, then return the first middle node.

Example: Consider, 10 -> 20 -> 30 -> 40 is the given list, then the nodes present at the middle with respective data values are, 20 and 30. We return the first node with data 20.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output Format :
For each test case/query, print the data value of the node at the middle of the given list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5 
Where M is the size of the singly linked list.

Time Limit: 1sec

Sample Input 1 :
1
1 2 3 4 5 -1

Sample Output 1 :
3

Sample Input 2 :
2 
-1
1 2 3 4 -1

Sample Output 2 :
2
*/




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



int length(Node* head){                // function for calculating the length
	Node *temp = head;
	if(temp != NULL){
		return 1+length(temp->next);    // important part of recursion.Think it twice for the approach.
	}else{
		return 0;
	}
}



void midpoint(int len, Node* head){    // main code for the midpoint
	
	Node *temp = head;
	int count = 0;
	
	int mid = ((len-1)/2);             // calculating the mid here and it will remain same for the odd and even lengths of the linked list

	while(count < mid){
		temp = temp->next;
		count++;                       // how idiot am i :-( .... i forgot to write this condition and loop was ruuning infinitely
	}
	cout<<endl<<temp->data;
	return;
}
	


 int main(){
 	Node* head = modifiedGetInput();
  	int len = length(head); 
  	print(head);
  	cout<<endl<<len;
  	
  	midpoint(len, head);
 	
 }
