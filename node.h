/* Author: Cameron Salazar
 * Assignment: coding03 - Linked List
 * Data: 6/20/2019
 * Purpose: The purpose of this program is to test the implementation of a linked list.
 *		The main.cpp test the linked list object, list.cpp is responsible for organizing
 *		& controlling the list, node.h contains structures needed for list and main.
*/

#ifndef LINKED_LIST_DATA_H
#define LINKED_LIST_DATA_H

#include <string>

struct DataNode{
	int id;
	std::string data;
};

struct Node : DataNode{
	Node * next,* last;
};

#endif