/*
 * p8.c
 *
 *  Created on: 12-Sep-2024
 *      Author: root
 */
#include<stdio.h>
#define max 5
struct priority_queue{
	int data;
	int priority;
}pq[max];

int f = 0 , r = -1;

void enqueue();
void dequeue();
void travers();
void swep();

void enqueue(){
	if(r == max -1){
		printf("\nQueue Is Full...!\n");
		return ;
	}
	else{
		r++;
		printf("Enter the data : ");
		scanf("%d",&pq[r].data);

		printf("Enter the Priority :");
		scanf("%d",&pq[r].priority);
	}
	return ;
}

void swep(){
	struct priority_queue temp;

	for(int i=f;i<=r;i++){
		for(int j = i+1; j<=r; j++){
			if(pq[i].priority > pq[j].priority){
				temp = pq[i];
				pq[i] = pq[j];
				pq[j] = temp;
			}
		}
	}
	return ;
}

void dequeue(){
	if(f == 0 && r == -1){
		printf("\nQueue Is Empty...!\n");
		return ;
	}
	if(f == r){
		f = 0;
		r = -1;
	}
	else{
		f++;
		printf("Element Remove Successfully : ");
	}
	return ;
}

void travers(){
	if(f == 0 && r == -1){
		printf("\nQueue Is Empty...!\n");
		return ;
	}
	else{
		printf("|");
		for(int i = f; i <= r; i++){
			printf(" %d , %d |",pq[i].data,pq[i].priority);
		}
	}
	return ;
}


int main(){
    int choice;
    do{
        printf("\nPress 1:Enqueue\nPress 2:Dequeue\nPress 3:Travesa\nPress 4:Exit\n\n");
        printf("Enter Your Choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            enqueue();
            swep();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            travers();
            break;
            case 4:
            printf("Your Out Of The Program...\n");
            return -1;

            default:
                printf("\nEnter Valid choice :\n");
        }
    } while(1);
    return 0;
}

