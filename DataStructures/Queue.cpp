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
	int firstElement = 0;
	int newSize = (q->maxSize) - 1;
	int* newArr = new int[(q->maxSize) - 1];
	if (isEmpty)
	{
		return -1;
	}
	for (int i = 0; i < (q->maxSize) - 1); i++)
	{
		newArr[i] = (q->arr)[i + 1];
	}
	firstElement = (q->arr)[i];
	delete[] q->arr;
	q->arr = newArr;
	q->maxSize = newSize;
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