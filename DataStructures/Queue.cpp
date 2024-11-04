#include "Queue.h"
typedef struct Queue
{
	int* arr;
	int maxSize;
	int count;
} Queue;
void initQueue(Queue* q, unsigned int size);
{
	q->arr = new int[size];
	q->maxSize = size;
	count = 0;
}
void cleanQueue(Queue* q);
{
	delete[] q->arr;
}

void enqueue(Queue* q, unsigned int newValue);
{
	if (!isFull)
	{
		for (int i = 0; i < s->maxSize:i++)
		{
			if ((s->arr)[i] == nullptr)
			{
				(s->arr)[i] = newValue;
				break;
			}
		}
	}
}
int dequeue(Queue* q); // return element in top of queue, or -1 if empty
{
	int* newArr = new int[(q->size) - 1];
	int firstElement = 0;
	for (int i = 0; i < (q->size) - 1); i++)
	{
		newArr[i] = (q->arr)[i + 1];
	}
	firstElement = (q->arr)[i];
	delete[] q->arr;
	q->arr = newArr;
	return firstElement;
}

bool isEmpty(Queue* s);
{
	for (int i = 0; i < s->maxSize:i++)
	{
		if ((s->arr)[i] != nullptr)
		{
			return false;
		}
	}
	return true;
}
bool isFull(Queue* s);
{
	for (int i = 0; i < s->maxSize:i++)
	{
		if ((s->arr)[i] == nullptr)
		{
			return false;
		}
	}
	return true;
}