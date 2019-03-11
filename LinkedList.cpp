// Example program
#include <iostream>
#include <cstdlib>
#include "LinkedList.h"
using namespace std;

List::List(){
	head = NULL;
	current = NULL;
	temp = NULL;
	tail = NULL;
}

void List::AddNode(int addData){
	nodePtr n = new node;
	n-> next = NULL;
	n-> data = addData;
	
	if(head != NULL){
		current = head;
		while(current->next !=NULL){
			current = current -> next;
		}
		current-> next = n;
	}
	else{
		head = n;
	}
}

void List::DeleteNode(int delData){
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	
	while(curr !=NULL && curr -> data != delData){
		temp = curr;
		curr = curr ->next;
	}
	if(curr == NULL){
		cout << delData << " was not in the list\n";
	}
	else{
		delPtr ==curr;
		curr = curr-> next;
		temp -> next = curr;
		if(delPtr == head){
			head = head -> next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted\n";
	}
}

void List::PrintList(){
	curr = head;
	while(curr != NULL){
		cout<< curr -> data << endl;
		curr = curr -> next;
	}
}

void List::Reverser(){
	while(current != NULL){
		next = current->next;
		current-> = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

