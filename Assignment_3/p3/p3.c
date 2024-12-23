/*
 * p3.c
 *
 *  Created on: 11-Oct-2024
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*tmp = NULL,*curr = NULL,*first = NULL,*last = NULL;

void insert_last(){
    tmp = (struct node *) malloc (sizeof(struct node));
    printf("\nEnter the Data :");
    scanf("%d",&tmp->data);
    tmp->next = NULL;
    if(first == NULL){
        first = last = tmp;
    }else{
        last->next = tmp;
        last = tmp;
    }
}

void delete_first(){
    if(first == NULL){
        printf("\nLinked List Is Empty..!");
        return ;
    }else{
        tmp = first;
        printf("\n%d Data Is Deleted :",tmp->data);
        if(first == last){
            first = last = NULL;
        }else{
            first = first->next;
        }
        free(tmp);
    }
}

void travers(){
    if(first == NULL){
        printf("\nLinked List Is Empty..!");
        return ;
    }else{
        curr = first;
        printf("|");
        while(curr != NULL){
            printf(" %d |",curr->data);
            curr = curr->next;
        }
    }
}

int main(){
    int choice;
    do{
        printf("\nPress 1 to Insert Last");
        printf("\nPress 2 to Delete first");
        printf("\nPress 3 to Traverse");
        printf("\nPress 4 to Exit");

        printf("\nEnter Your Choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            insert_last();
            break;

            case 2:
            delete_first();
            break;

            case 3:
            travers();
            break;

            case 4:
            printf("\nYou Are Out Of The Program....");
            return 0;

            default:
            printf("\nEnter valid Choice...!");
        }
    }while(1);

    return 0;
}



