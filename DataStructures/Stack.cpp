#include "Stack.h"
/*
* this function adds a element to the first of the stack
*/
void push(Stack* s, unsigned int element)
{
	insertNumber(s->node, element);
	*(s->count) += 1;
}
/*
* this function remove an element from the first of the stack 
*/
int pop(Stack* s) // Return -1 if stack is empty
{
	List* newNode = *(s->node);
	int number = 0;
	if (isEmpty(s))
	{
		return -1;
	}
	number = newNode->number;
	removeFirstNumber(s->node);
	*(s->count) -= 1;
	return number;
}
/*
* this function do aplce in memory to the pointers and athol
*/
void initStack(Stack* s)
{
	s->node = new List*;
	*(s->node) = nullptr;
	s->count = new int;
	*(s->count) = 0;
}
/*
* this function cleans all the memory of the stack (all the nodes and the param)
*/
void cleanStack(Stack* s)
{
	List* newNode = *(s->node);
	List* curr = newNode;
	List* temp = nullptr;
	while (curr)
	{
		temp = curr->next;
		delete curr;
		curr = temp;
	}
	delete s->node;
	s->node = nullptr;
	delete s->count;
	s->count = nullptr;
}

bool isEmpty(Stack* s)
{
	return *(s->count) == 0;
}
bool isFull(Stack* s)
{
	return false;
}