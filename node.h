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