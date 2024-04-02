#include <iostream>
#define Queue_CAPACITY 10
int queue[Queue_CAPACITY];
int head = 0;
int tail = -1;
int queue_size = 0;

void Enqueue(int _n) 
{
	if (queue_size == Queue_CAPACITY) 
	{
		printf("Queue Is Full..\n");
		return;
	}
	++tail;
	++queue_size;
	queue[tail] = _n;
}

int Dequeue() 
{
	if (queue_size == 0) 
	{
		printf("Queue Is Empty..\n");
		return;
	}
	int outIndex = queue[head];
	++head;
	--queue_size;

	return outIndex;
}
