/*
 * p5.c
 *
 *  Created on: 06-Sep-2024
 *      Author: root
 */

#include<stdio.h>
#define max 5
int Q[max];
int f = max - 1 , r = max;

void enqueue(){
    if(r == 0){
        printf("Queue Is Full...!\n");
        return ;
    }
    else{
        printf("Enter the element :");
        scanf("%d",&Q[--r]);
    }
    return ;
}

void dequeue(){
    if(f == max - 1 && r == max){
        printf("Queue Is Empty...!\n");
        return ;
    }
    else{
        printf("\nElement Removed Successfully : %d\n", Q[f--]);
    }
    return ;
}

void travers(){
    if(f == max - 1 && r == max ){
        printf("Queue Is Empty...!\n");
        return ;
    }
    printf("|");
    for(int i = f; i >= r; i--){
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

