/*
 * p1.c
 *
 *  Created on: 02-Sep-2024
 *      Author: root
 */
#include<stdio.h>
#define max 6
int Queue[max];
int f = 0;
int r = -1;

void enqueue();
void dequeue();
void travel();

void enqueue(){
    if(r == max - 1){
        printf("Queue Is Full..\n");
        return ;
    }
    printf("Enter the Value : ");
    scanf("%d",&Queue[++r]);
    return ;
}

void dequeue(){
    if( f > r ){
        printf("Queue Is Empty..\n");
        return ;
    }
    printf("\nElement Removed Successfully : %d\n", Queue[f++]);
    if( f > r ){
        f = 0;
        r = -1;
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
        printf("\nPress 1:Enqueue\nPress 2:Dequeue\nPress 3:Travesal\nPress 4:Exit\n\n");
        printf("Enter Your Choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            travel();
            break;
            case 4:
            printf("Your Out Of The Program :\n");
            return -1;

            default:
                printf("\nEnter Valid choice :\n");
        }
    } while(1);
    return 0;
}

