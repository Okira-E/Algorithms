#include <iostream>
#include "Queue_header.h"
using namespace std;

// ************************************************************************
// ******************** queueType Functions definition ********************
// ************************************************************************

// ******************** queueType ********************
queueType::queueType()
{
	count = 0;
	front = 0;
	rear = -1; // rear = size-1; should also works, but need modifications in the append ...etc
} // end constructor

// ******************** ~queueType ********************
queueType::~queueType()
{
} // end destructor

// ******************** isempty ********************
bool queueType::isempty() const
{
	return count == 0;
} // end func -isempty-

// ******************** isfull ********************
bool queueType::isfull() const
{
	return count == QueueSize;
} // end fun -isfull-

// ******************** print ********************
void queueType::print() const
{
	if(!isempty())
	{
		int i;
		for (i = front; i !=rear; i=(i+1)%QueueSize)
			cout << queue[i] << " ";
		cout << queue[i] << endl;
	} // end if -!isempty-
	else
		cout << "*** in print: underflow!!, the queue is empty\n";
} // end fun -print-

// ******************** getCount ********************
int queueType::getCount() const
{
	return count;
} // end fun -getCount-

// ******************** append ********************
void queueType::append(int e)
{
	if(!isfull())
	{
		// always add elements to the rear (end) of the queue
		rear = ((rear+1) == QueueSize ? 0 : rear+1);
		queue[rear] = e;
		count++;
	} // end if -!isfull-
	else
		cout << "*** in append: overflow!!, the queue is full\n";
} // end fun -append-

// ******************** serve ********************
void queueType::serve()
{
	if(!isempty())
	{
		front = ((front+1) == QueueSize ? 0 : front+1);		
		count--;
	} // end if -!isempty-
	else
		cout << "*** in serve: underflow!!, the queue is empty\n";
} // end fun -serve-

// ******************** retrieve ********************
int queueType::retrieve() const
{
	if(!isempty())
	{
		return queue[front];
	} // end if -!isempty-
	else
		cout << "*** in retrieve: underflow!!, the queue is empty\n";
} // end fun -retrieve-


// ******************** search ********************
int queueType::search(int e) const
{
	int pos = -1;
	if(!isempty())
	{
		int i;
		for (i = front; i !=rear; i=(i+1)%QueueSize)
			if(queue[i] == e)
			{
				pos=i;
				break;
			}// end if -queue[i]==e-
			if(pos == -1)
				if(queue[rear] == e)
					pos = rear;
	} // end if -!isempty-
	else
		cout<<"*** in search: underflow!!, the queue is empty\n";
	return pos;
} // end fun-search-
