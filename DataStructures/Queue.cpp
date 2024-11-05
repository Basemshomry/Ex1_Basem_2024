#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->array = new int[size];
	q->maxSize = new int;
	q->count = new int;
	*(q->maxSize) = size;
	*(q->count) = 0;
}
void cleanQueue(Queue* q)
{
	delete[] q->array;
	delete q->count;
	delete q->maxSize;
	q->array = nullptr;
	q->maxSize = nullptr;
	q->count = nullptr;
}

void enqueue(Queue* q, unsigned int newValue)
{
	(q->array)[*(q->count)] = newValue;
	*(q->count) += 1;
}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int firstElement = 0,i = 0;
	int newSize = *(q->maxSize) - 1;
	int* newArr = new int[*(q->maxSize) - 1];
	if (isEmpty(q))
	{
		return -1;
	}
	for (i = 0; i < newSize; i++)
	{
		newArr[i] = (q->array)[i + 1];
	}
	firstElement = (q->array)[0];
	delete[] q->array;
	q->array = newArr;
	*(q->maxSize) = newSize;
	*(q->count) -= 1;
	return firstElement;
}

bool isEmpty(Queue* s)
{
	if (*(s->count) == 0)
	{
		return true;
	}
	return false;
}
bool isFull(Queue* s)
{
	return *(s->count) == *(s->maxSize);
}