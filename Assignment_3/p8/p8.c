/*
 * p8.c
 *
 *  Created on: 15-Oct-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int coefficient;
    int power;
    char operator[2];
    struct node *next;
}*curr = NULL,*tmp = NULL,*first = NULL,*last = NULL;

void insert_last(){
    tmp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the coefficent :");
    scanf("%d",&tmp->coefficient);

    printf("\nEnter the operator :");
    scanf("%s",tmp->operator);

    tmp->next = NULL;
    if(first == NULL){
        printf("\nEnter the power :");
        scanf("%d",&tmp->power);
        first = last = tmp;
    }else{
        tmp->power = last->power - 1;
        last->next = tmp;
        last = tmp;
    }
}

void travers(){
    if(first == NULL){
        printf("\nLinked List Is Empty...!");
        return ;
    }else{
        curr = first;
        printf("\n polynomial : ");
        while(curr != NULL){
          if(curr == first){
            printf("\n%dx^%d", curr->coefficient, curr->power);
          }else{
            printf(" %s %dx^%d", curr->operator, curr->coefficient, curr->power);
          }
          curr = curr->next;
        }
        printf("\n");
    }
}

int main(){
    int choice;

    do{
        printf("\n1. Insert term into polynomial");
        printf("\n2. Display polynomial");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_last();
                break;
            case 2:
                travers();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }while(1);

    return 0;
}
