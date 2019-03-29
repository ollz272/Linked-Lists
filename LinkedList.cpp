// Example program
#include <iostream>
#include <cstdlib>
#include "Linked List.h"
using namespace std;

//the constructor function. Sets all of the "trackers" as 0.
List::List(){
	head = NULL;
	current = NULL;
	temp = NULL;
	tail = NULL;
}


//This function will add a node.
void List::AddNode(int addData){
	//Here we set create a node pointer.
	nodePtr n = new node;
	// We set this new nodes pointer to point to nothing.
	n-> next = NULL;
	//We set its data to whatever we addData is.
	n-> data = addData;

	if(head != NULL){ //This statement here covers the case that we already have objects in our linked list.
		current = head; //We want to start at the head.
		while(current -> next != NULL){ //Until we reach the end of the linked list
			current = current -> next; //Make the current pointer move to the next node.
		}
		current-> next = n; // We are now at the end. Let the current penultimate pointer point to our new node.
	}
	else{
		head = n;
	}
}

//This function will delete a node which has the given data inside of it.
void List::DeleteNode(int delData){
	//We initialize some values before starting.
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;

	//The first condition ensures the while loop will stop when it reaches the tail of the list. The second condition ensures that we will stop on the node that contains delData.
	while(curr !=NULL && curr -> data != delData){//This just moves current and temp so that current is always one ahead of temp.
		temp = curr;
		curr = curr -> next;
	}
	if(curr == NULL){//to deal with the case that the data wasn't there.
		cout << delData << " was not in the list\n";
	}
	else{//Deal with the case that we find the data (ie the good part).

		delPtr == curr; // have the delete pointer point to the object that needs to be deleted.
		curr = curr -> next; //move the current node to the one after the node in need of deletion.
		temp -> next = curr; //for the node before the one that needs to be deleted, have its pointer point to the one in front of the node thats being deleted.
		if(delPtr == head){//the only special case is when the node being deleted is the head.
			head = head -> next; //move the head to be the one after the node being deleted.
			temp = NULL; //reset temp.
		}
		delete delPtr; //delete.
		cout << "The value " << delData << " was deleted\n";
	}
}

void List::Reverser(){
	while(current != NULL){
		next = current -> next;
		current -> = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
