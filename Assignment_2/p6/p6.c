/*
 * p6.c
 *
 *  Created on: 12-Sep-2024
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>
#define max 5
int s = 0 , l = -1;
int *f = NULL , *r = NULL;
int Q[max];
void enqueue();
void dequeue();
void travers();
int main(){
	f = (int*)malloc(sizeof(int));
	r = (int*)malloc(sizeof(int));
	*f = 0 , *r = -1;
	 int choice;
	    do{

	        printf("\nPress 1:Enqueue\nPress 2:Dequeue\nPress 3:Travesal\nPress 4:Exit\n");

	        printf("Enter the choice :");
	        scanf("%d",&choice);

	        switch(choice){
	            case 1:
	            enqueue();
	            break;

	            case 2:
	            dequeue();
	            break;

	            case 3:
	            travers();
	            break;

	            case 4:
	            printf("\n\vYou Are Out Of The Program....\n");
	            return 0;

	        }
	    }
	    while(1);
	    return 0;
}

void enqueue(){
	if(*r == max - 1){
		printf("\nQueue Is Empty...!\n");
		return ;
	}
	else{
		printf("Enter the Element :");
		scanf("%d",&Q[++(*r)]);
	}
	return ;
}

void dequeue(){
	if(*f == 0 && *r == -1){
		printf("\nQueue Is Empty...!\n");
		return ;
	}
	else if(*r == *f){
		printf("\nElement Remove Successfully : ",Q[(*f)]);
		f = &s;
		r = &l;
	}
	else{
		printf("\nElement Remove Successfully : ",Q[(*f)++]);
	}
	return ;
}

void travers(){
	if(*f == 0 && *r == -1){
		printf("\nQueue Is Empty...!\n");
		return ;
	}
	printf("|");
	for(int i = *f; i <= *r ;i++){
		printf(" %d |",Q[i]);
	}
	return ;
}
