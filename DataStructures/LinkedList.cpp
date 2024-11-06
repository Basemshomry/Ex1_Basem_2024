#include "LinkedList.h"
/*
* this function do a place to the node and put the values in the param
*/
List* creatNode(int number)
{
	List* newNode = new List;
	newNode->number = number;
	newNode->next = nullptr;
	return newNode;
}
/*
* this function add a number to the first of the node
*/
void insertNumber(List** node, int newNumber)
{
	List* newNode = creatNode(newNumber);
	newNode->next = *node;
	*node = newNode;
}
/*
* this function removes a number from the first of the node and cleans the first node
*/
void removeFirstNumber(List** node)
{
	List* newNode = *node;
	List* dNode = newNode;
	*node = newNode->next;
	delete dNode;
	dNode = nullptr;
}