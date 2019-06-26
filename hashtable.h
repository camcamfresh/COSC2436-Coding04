/* Author: Cameron Salazar
 * Assignment: coding04 - Hash Tables
 * Data: 6/26/2019
 * Purpose: The purpose of this program is to test the implementation of a hash table using a linked list.
 * 			The linked list is the same one from coding03 with slight modifications, main.ino preforms multiple
 *			test on the hasttable class located in hashtable.cpp.
*/

#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "list.h"
#include <iostream>
#define TABLESIZE 19

class HashTable{
private:
	List * table[TABLESIZE];
	int size;
	
	int hashIt(int);
public:
	HashTable();
	~HashTable();
	
	bool add(int, std::string);
	bool remove(int);
	std::string getValue(int);
	bool contains(int);
	bool clear();
	bool isEmpty();
	int getCount();
	void transverse();

};
#endif