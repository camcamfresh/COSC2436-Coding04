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