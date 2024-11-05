#include "Stack.h"
void push(Stack* s, unsigned int element)
{
	insertNumber(s->node, element);
	*(s->count) += 1;
}
int pop(Stack* s) // Return -1 if stack is empty
{
	if (isEmpty(s))
	{
		return -1;
	}
	removeFirstNumber(s->node);
	*(s->count) -= 1;
}

void initStack(Stack* s)
{
	s->node = nullptr;
	*(s->count) = 0;
}
void cleanStack(Stack* s)
{
	List* curr = s->node;
	List* temp = nullptr;
	while (curr)
	{
		temp = curr->next;
		delete curr;
		curr = temp;
	}
	s->node = nullptr;
}

bool isEmpty(Stack* s)
{
	return *(s->count) == 0;
}
bool isFull(Stack* s)
{
	return false;
}