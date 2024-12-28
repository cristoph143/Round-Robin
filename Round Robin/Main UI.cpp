#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "Header.h"
#define QUANTUM_TIME 2


int main (void){

	struct Round *queque = NULL,temp;
	int i;
	//enQueue(queque, temp);
	//printf("Menu:\n1.] Add Number of Process\n2.]Display Table\n3.] Delete Number of Process\n[Press any key to Continue....]\n ");
	//scanf("%d", &choice);

	//while(choice < 3 && choice > 0)
	//{
	//	switch (choice)
	//	{
	//	case 1: 
	//			system("cls");
				//while(enQueue(queque, temp) != NULL){
				printf("Enter number of process: ");
				scanf("%d", &temp.process_id);


				for(i = 0; i < *temp.process_id; i++)
				{
					printf("Enter P%d Arrival Time and Burst Time: ", i+1);
					scanf("%d\t%d", &temp.arrival_time[i], &temp.burst_time[i]);
					printf("\n");
		
				//}
				}
				//main();
				//display(i, &temp);
	/*if( temp.arrival_time[i] < temp.arrival_time[i+1])
	{
		printf("The Arrival Time is Bigger than the previous P\n");
		printf("Enter P%d Arrival Time and Burst Time: ", i+1);
		scanf("%d\t%d", &temp.arrival_time[i], &temp.burst_time[i]);
		printf("\n");
	}*/
		//		break;
		//case 2: 
		//		system("cls");
				display(i, &temp);
	//			break;
	//	}
	//}
				//char choice;
				//scanf("%c", &choice);
				//if(toupper(choice) == 'Y')
				//	main();
				//else
				//	return 0;
	getch();
}



