/* Author: Cameron Salazar
 * Assignment: coding04 - Hash Tables
 * Data: 6/26/2019
 * Purpose: The purpose of this program is to test the implementation of a hash table using a linked list.
 * 			The linked list is the same one from coding03 with slight modifications, main.ino preforms multiple
 *			test on the hasttable class located in hashtable.cpp.
*/
#ifndef HASH_TABLE_DATA_H
#define HASH_TABLE_DATA_H

#include <string>

struct DataNode{
	int id;
	std::string data;
};

struct Node : DataNode{
	Node * next,* last;
};

#endif