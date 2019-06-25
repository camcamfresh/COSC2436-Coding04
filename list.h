/* Author: Cameron Salazar
 * Assignment: coding03 - Linked List
 * Data: 6/20/2019
 * Purpose: The purpose of this program is to test the implementation of a linked list.
 *		The main.cpp test the linked list object, list.cpp is responsible for organizing
 *		& controlling the list, node.h contains structures needed for list and main.
*/

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H

#include "node.h"
#include <iostream>

class List{
private:
	int size;
	Node * head;
	
	Node * searchList(int);
	void printList(bool ,Node *);
	void insert(Node *, int);
	
	
public:
	List();
	~List();
	
	bool addNode(int, std::string);
	bool deleteNode(int);
	bool getNode(int, DataNode *);
	
	bool clear();
	int getCount();

	void printList(bool = true);
	
};

#endif