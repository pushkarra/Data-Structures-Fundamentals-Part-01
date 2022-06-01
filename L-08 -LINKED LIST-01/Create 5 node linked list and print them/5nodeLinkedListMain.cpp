#include <bits/stdc++.h>
#include "5nodeLinkedListClass.cpp"
using namespace std;


void print (Node *head){
	Node *temp = head;
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
	Node n4(4);
	Node n5(5);
	
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	
	print(head);
	
	
	// dynamic approach
	Node *n6 = new Node(6);
	Node *heading = n6;
	
	Node *n7 = new Node(7);
	Node *n8 = new Node(8);
	Node *n9 = new Node(9);
	Node *n10 = new Node(10);
	
	n6->next = n7;
	n7->next = n8;
	n8->next = n9;
	n9->next = n10;
	
	print(heading);	
}