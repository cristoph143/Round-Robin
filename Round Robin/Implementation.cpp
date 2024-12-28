#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Header.h"
#define QUANTUM_TIME 2


int EmptyQueue(Round *temp){

	if(temp == NULL)
		return 1;
	return 0;

}


void createQueue(){

	struct Round *queque = NULL, temp;

	while(queque == NULL){
		//&enQueue(queque, temp);
	}
}

void *enQueue(Round *queque, Round *temp){	
	
	Round p;
	temp = (Round*)malloc(sizeof(Round));
	p = *temp;
	while (&p!=NULL)
	{ 
		printf("\n %d",p.next);
		return &temp;
	}

}


void display(int i,Round *temp){



	printf("Process  | Arrival Time | Burst Time | Response Time | Waiting Time | Turn Around Time\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

	for(i = 0; i < *temp->process_id; i++){
		printf("\nP%d\t | \t%d\t| \t %d", i+1, temp->arrival_time[i], temp->burst_time[i]);
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	}
}