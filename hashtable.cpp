#include "hashtable.h"

HashTable::HashTable(){
	for(int i = 0; i < TABLESIZE; i++)
		table[i] = new List;
	size = 0;
}
HashTable::~HashTable(){
	for(int i = 0; i < TABLESIZE; i++)
		delete table[i];
	size = 0;
}
	
bool HashTable::add(int id, std::string data){
	if(table[hashIt(id)]->addNode(id, data)){
		size++;
		return true;
	}
	return false;
}
bool HashTable::remove(int id){
	if(table[hashIt(id)]->deleteNode(id)){
		size--;
		return true;
	}
	return false;
}
std::string HashTable::getValue(int){
	return "";
}
bool HashTable::contains(int){
	return false;	
}
bool HashTable::clear(){
	
	return false;
}
bool HashTable::isEmpty(){
	return false;
}
int HashTable::getCount(){
	return false;
}
void HashTable::transverse(){
	
}

int HashTable::hashIt(int id){
	return id % TABLESIZE;
}