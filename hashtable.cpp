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
std::string HashTable::getValue(int id){
	DataNode result;
	table[hashIt(id)]->getNode(id, &result);
	return result.data;
}
bool HashTable::contains(int id){
	return table[hashIt(id)]->getNode(id);	
}
bool HashTable::clear(){
	if(size){
		for(int i = 0; i < TABLESIZE; i++)
			table[i]->clear();
		size = 0;
		return true;
	}
	return false;
}
bool HashTable::isEmpty(){
	return size != 0;
}
int HashTable::getCount(){
	return size;
}
void HashTable::transverse(){
	for(int i = 0; i < TABLESIZE; i++)
		table[i]->printList();
}
int HashTable::hashIt(int id){
	return id % TABLESIZE;
}