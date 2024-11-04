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
		(q->arr)[q->count] = newValue;
		q->count += 1;
	}
}
int dequeue(Queue* q); // return element in top of queue, or -1 if empty
{
	if (isEmpty)
	{
		return -1;
	}
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
	return q->count == 0;
}
bool isFull(Queue* s);
{
	return q->count == q->maxSize;
}