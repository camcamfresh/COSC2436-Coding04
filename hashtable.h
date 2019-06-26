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