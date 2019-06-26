/* Author: Cameron Salazar
 * Assignment: coding04 - Hash Tables
 * Data: 6/26/2019
 * Purpose: The purpose of this program is to test the implementation of a hash table using a linked list.
 * 			The linked list is the same one from coding03 with slight modifications, main.ino preforms multiple
 *			test on the hasttable class located in hashtable.cpp.
*/
#include "list.h"

List::List(){
	size = 0;
	head = NULL;
}

List::~List(){
	clear();
}

bool List::addNode(int id, std::string data){
	//Search for any exisiting id if any elements exists.
	if(head != NULL && searchList(id)) return false;
	
	//Create node and store data.
	Node * node = new Node;
	node->id = id;
	node->data = data;
	node->next = NULL;
	node->last = NULL;
	size++;
	
	if(size == 1) head = node;
	else insert(node, id);
	
	return true;
}

void List::insert(Node * node, int id){
	if(head->id > id){
		head->last = node;
		node->next = head;
		head = node;
	}
	else{
		Node * search = head;
		while(search->next != NULL && search->id < id) search = search->next;
		
		if(search->id < id){
			search->next = node;
			node->last = search;
		}
		else{
			node->next = search;
			node->last = search->last;
			search->last = node;
			node->last->next = node;
		}
	}
}

bool List::deleteNode(int id){
	Node * node = (Node *) searchList(id);
	if(node){
		if(node->next != NULL) node->next->last = node-> last;
		head != node ? node->last->next = node->next : head = node->next;
		delete node;
		size--;
		return true;
	}
	return false;
}

bool List::getNode(int id, DataNode * output){
	Node * node = (Node *) searchList(id);
	if(node){
		if(output){
			output->id = node->id;
			output->data = node->data;
		}
		return true;
	}
	else{
		if(output){
			output->id = -1;
			output->data = "";
		}
		return false;
	}
}

void List::printList(bool forward){
	if(head == NULL) return;
	if(forward)	printList(forward, head);
	else{
		Node * last = head;
		while(last->next != NULL) last = last->next;
		printList(forward, last);
	}
}

void List::printList(bool forward, Node * current){
	std::cout << "ID: " << current->id << " Data: " << current->data << std::endl;
	if(forward && current->next != NULL) printList(forward, current->next);
	else if(!forward && current->last !=NULL) printList(forward, current->last);
}

int List::getCount(){
	return size;
}

bool List::clear(){
	if(size == 0) return false;
	Node * node = head;
	while(node->next != NULL){
		node = node->next;
		delete node->last;
	}
	delete node;
	head = NULL;
	size = 0;
	return true;
}

Node * List::searchList(int id){
	Node * tempPtr = head;
	while(tempPtr != NULL && tempPtr->id != id)
		tempPtr = tempPtr->next;
	return tempPtr;
}
	