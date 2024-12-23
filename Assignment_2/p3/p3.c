/*
 * p3.c
 *
 *  Created on: 02-Sep-2024
 *      Author: root
 */
#include<stdio.h>
#define max 5
int Q[max];
int f = 0 , r = -1;

void enqueue(){
    if(r == max - 1){
        printf("Queue Is Full..!\n");
        return ;
    }
    else{
        printf("Enter the element :");
        scanf("%d",&Q[++r]);
    }
    return ;
}

void dequeue(){
    if(f == 0 && r == -1){
        printf("Queue is empty...!\n");
        return ;
    }
    else{
        printf("\nElement Removed Successfully : %d\n", Q[--r]);
    }
    return ;
}

void travers(){
    if(f == 0 && r == -1){
        printf("Queue is empty...!\n");
        return ;
    }
    printf("|");
    for(int i = r; i >= f; i-- ){
        printf(" %d |",Q[i]);
    }
    return ;
}

int main(){
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
