#include "LinkedList.h"
List* creatNode(int number)
{
	List* newNode = new List;
	newNode->number = number;
	newNode->next = nullptr;
	return newNode;
}
void insertNumber(List** node, int newNumber)
{
	List* newNode = creatNode(newNumber);
	newNode->next = *node;
	*node = newNode;
}
void removeFirstNumber(List** node)
{
	List* newNode = *node;
	List* dNode = newNode;
	*node = newNode->next;
	delete dNode;
	dNode = nullptr;
}