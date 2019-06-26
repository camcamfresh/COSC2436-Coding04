/* Author: Cameron Salazar
 * Assignment: coding04 - Hash Tables
 * Data: 6/26/2019
 * Purpose: The purpose of this program is to test the implementation of a hash table using a linked list.
 * 			The linked list is the same one from coding03 with slight modifications, main.ino preforms multiple
 *			test on the hasttable class located in hashtable.cpp.
*/
#ifndef HASH_TABLE_LIST_H
#define HASH_TABLE_LIST_H

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
	bool getNode(int, DataNode * = NULL);
	
	bool clear();
	int getCount();

	void printList(bool = true);
	
};

#endif