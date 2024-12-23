/*
 * p7.c
 *
 *  Created on: 09-Sep-2024
 *      Author: root
 */

#include<stdio.h>
#define max 5

int Q1[max],Q2[max];
int r1 = -1,f1 = 0,r2 = -1,f2 = 0;
int QN;

int is_full(int QN){
	switch(QN){
	case 1:
		if(r1 == max - 1){
			return 1;
		}
		break;
	case 2:
		if(r2 == max - 1){
			return 1;
		}
		break;
	default:
		printf("Queue Dose Not Exist...!\n");
	}
	return 0;
}

void enqueue();
void dequeue();
void traversal();

void enqueue(){
	printf("In which Queue You Want To Insert Element :");
	scanf("%d",&QN);

	switch(QN){

	case 1:

		if(is_full(1)){
			printf("Queue1 Is Full...!\n");
			return ;
		}

		printf("\nEnter The Data :");
		scanf("%d",&Q1[++r1]);

		break;

	case 2:

		if(is_full(2)){
			printf("Queue2 Is Full...!\n");
			return ;
		}

		printf("\nEnter the Data :");
		scanf("%d",&Q2[++r2]);

		break;

	default:
		printf("Queue Dose Not Exist....!\n");
	}

	return ;
}

void dequeue(){
	printf("\nFrom Which Queue You Want To Remove Element :\n");
	scanf("%d",&QN);
	switch(QN){
	case 1:
		if(r1 == -1 && f1 == 0){
			printf("Queue1 Is Empty...\n");
			return ;
		}

		else if(r1 == f1){
			printf("\nElement Removed Successfully : %d\n", Q1[f1]);
			f1 = 0;
			r1 = -1;
		}

		else{
			printf("\nElement Removed Successfully : %d\n", Q1[f1++]);
		}
		return ;
		break;

	case 2:
		if(r2 == -1 && f2 == 0){
			printf("Queue2 Is Empty...\n");
			return ;
		}
		else{
			if(r1 == -1 && f1 == 0){
				if(r2 == r1){
					printf("\nElement Removed Successfully : %d\n", Q2[f2]);
					f2 = 0;
					r2 = -1;
				}
				else{
					printf("\nElement Removed Successfully : %d\n", Q2[f2++]);
				}
			}
			else{
				printf("\nTo Dequeue From Queue2 Queue1 Must Be Empty...!\n");
			}
		}
		return ;
		break;

	default:
		printf("\nQueue%d Do Not Exist :\n",QN);

	}
}

void traversal(){
	if(f1 > r1){
		printf("\nQueue1 Is Empty...!\n");
	}
	printf("| ");
	for(int i = f1; i <= r1; i++){
		printf(" %d |",Q1[i]);
	}
	printf("\n");
	printf("| ");
	if(f2 > r2){
		printf("\nQueue2 Is Empty...!\n");
	}
	printf("\n");
	for(int i = f2; i <= r2; i++){
		printf(" %d |",Q2[i]);
	}
	return ;
}


int main(){

	int choice;

	do{
		printf("\nEnter Your Choice :\n");
		scanf("%d",&choice);

		switch(choice){
		case 1:
			enqueue();
			break;

		case 2:
			dequeue();
			break;

		case 3:
			traversal();
			break;

		case 4:
			printf("\nYou Are Out Of the Program....");
			return 0;
		default:
			printf("Enter Valid Choice...!\n");
		}
	}
	while(1);

	return 0;
}

