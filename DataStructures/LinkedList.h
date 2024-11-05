#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct List
{
	int number;
	struct List* next;
} List;

List* creatNode(int number);
void insertNumber(List** node, int newNumber);
void removeFirstNumber(List** node);

#endif /* QUEUE_H */