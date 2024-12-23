/*
 * P4.c
 *
 *  Created on: 06-Sep-2024
 *      Author: root
 */

#include<stdio.h>
#define max 5
int Queue[max];
int f = 0;
int r = -1;

void enqueue(){
    if(r == max - 1){
        printf("Queue Is Full..\n");
        return ;
    }
    printf("Enter the Value : ");
    scanf("%d",&Queue[++r]);
    return ;
}

void dequeue_r(){
	if(r == -1 && f == 0){
		printf("\nQueue Is Empty...\n");
		return ;
	}
	printf("\nElement Removed Successfully : %d\n", Queue[r]);
	if(r == f){
		f = 0;
		r = -1;
	}
	else{
		r--;
	}
	return ;
}

void dequeue_f(){
	if(r == -1 && f == 0){
		printf("\nQueue Is Empty...\n");
		return ;
	}
	printf("\nElement Removed Successfully : %d\n", Queue[f]);
	if(r == f){
		f = 0;
		r = -1;
	}
	else{
		f--;
	}
	return ;
}
	void travel(){
	   if( f > r ){
			printf("Queue Is Empty..\n");
			return ;
		}
		printf("|");
		for(int i = f; i <= r; i++){
			printf(" %d |",Queue[i]);
		}
		return ;
	}


	int main(){
	    int choice;
	    do{
	        printf("\nPress 1:Enqueue\nPress 2:Dequeue Rare\nPress 3:Dequeue Front\nPress 4:Travesal\nPress 5:Exit\n\n");
	        printf("Enter Your Choice :");
	        scanf("%d",&choice);

	        switch(choice){
	            case 1:
	            enqueue();
	            break;
	            case 2:
	            dequeue_r();
	            break;
	            case 3:
	            dequeue_f();
	            break;
	            case 4:
	            travel();
	            break;
	            case 5:
	            printf("Your Out Of The Program ....\n");
	            return -1;

	            default:
	                printf("\nEnter Valid choice :\n");
	        }
	    } while(1);
	    return 0;
	}



