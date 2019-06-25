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