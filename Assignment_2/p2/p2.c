/*
 * p2.c
 *
 *  Created on: 02-Sep-2024
 *      Author: root
 */

#include<stdio.h>
#define max 5
int Queue[max];
int f = -1;
int r = -1;

void enqueue();
void dequeue();
void traversal();

void enqueue(){
    if((f == 0 && r == max - 1) || r == f - 1){
        printf("\nCirculer Queue Is Full...\n");
        return ;
    }
    if(f == -1){
        f = r = 0;
    }
    else if(r == max - 1 && f > 0){
        r = 0;
    }
    else{r++;
    }
    printf("Enter the value : ");
    scanf("%d",&Queue[r]);
    return ;
}

void dequeue(){
    if(f == -1){
        printf("\nCirculer Queue Is Empty...\n");
        return ;
    }
    printf("\nElement Removed Successfully : %d\n", Queue[f]);
    if(f == r){
        f = r = -1;

    }
    else if(f == max -1){
        f = 0;
    }
    else{
        f++;
    }
   return ;
}

void traversal(){
    if(f == -1 && r == -1){
        printf("\nCirculer Queue Is Empty...\n");
        return ;
    }
    printf("|");
    if(r >= f){
        for(int i = f; i <= r; i++){
            printf(" %d |",Queue[i]);
        }
    }
    else{
        for(int i = f; i <= max - 1; i++){
            printf(" %d |",Queue[i]);
        }

        for(int i = 0; i <= r; i++){
            printf(" %d |",Queue[i]);
        }
    }
    return ;
}

int main(){
    int choice;
    do{
        printf("\nPress 1:Enqueue\nPress 2:Dequeue\nPress 3:Travesal\nPress 4:Exit\n");
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
            traversal();
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



