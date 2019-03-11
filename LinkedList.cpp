// Example program
#include <iostream>
#include <cstdlib>
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

void List::InsertNode(int insertData, int pos){
	if( pos > SizeOfList() )
	{
		cout << "There aren't that  many nodes in the list, dummy.\n";
		return;
	}
	nodePtr n =  new node;
	n-> next = NULL;
	n-> data = insertData;
	int i = 0;
	temp = head;
	current = head;
	while( i < pos){
		temp = current;
		current = current-> next;
	}
	temp->next = n;
	n->next = current;
}

void List::DeleteNode(int delData){
	nodePtr delPtr = NULL;
	temp = head;
	current = head;

	while(current !=NULL && current -> data != delData){
		temp = current;
		current = current ->next;
	}
	if(current == NULL){
		cout << delData << " was not in the list\n";
	}
	else{
		delPtr ==current;
		current = current-> next;
		temp -> next = current;
		if(delPtr == head){
			head = head -> next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted\n";
	}
}

void List::PrintList(){
	current = head;
	while(current != NULL){
		cout<< current -> data << endl;
		current = current -> next;
	}
}

int List::SizeOfList(){
	int size = 0;
	current = head;
	while(current != NULL){
		current = current -> next;
		size++;
	}
	return size;
}

/*void List::Reverser(){
	while(current != NULL){
		next = current->next;
		current-> = prev;
		prev = current;
		current = next;
	}
	head = prev;
}*/
