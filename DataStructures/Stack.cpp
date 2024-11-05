#include "Stack.h"
void push(Stack* s, unsigned int element)
{
	insertNumber(s->node, element);
	*(s->count) += 1;
}
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

void initStack(Stack* s)
{
	s->node = new List*;
	*(s->node) = nullptr;
	s->count = new int;
	*(s->count) = 0;
}
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