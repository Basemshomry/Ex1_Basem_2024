#include "LinkedList.h"
List* creatNode(int number)
{
	List* newNode = new List;
	newNode->number = number;
	newNode->next = nullptr;
	return newNode;
}
void insertNumber(List* node, int newNumber)
{
	List* newNode = creatNode(newNumber);
	if (node)
	{
		node = newNode;
	}
	else
	{
		newNode->next = node;
		node = newNode;
	}
}
void removeFirstNumber(List* node)
{
	List* dNode = node;
	node = node->next;
	delete node;
	node = nullptr;
}