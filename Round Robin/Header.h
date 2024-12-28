#ifndef HEADER_H
#define HEADER_H

struct Round{
	int process_id[40];
	int response_time[40];
	int waiting_time[40];
	int turn_around_time[40];
	int arrival_time[40];
	int burst_time[40];
	struct  Round *next;
};

typedef Round Robin;

void createQueue();
void *enQueue(Round *queque, Round Temp);
int deQueue();
int destroyQueue();
int fullQueue();
int EmptyQueue();
int peek();
void display(int i,Round *temp);


#endif