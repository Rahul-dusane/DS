/*
 * p11.c
 *
 *  Created on: 26-Jul-2024
 *      Author: root
 */

#include<stdio.h>
#define max 5
int arr_of_stack[max];
int top = -1;

void push();
void pop();
void peep();
void travel();

int main(){
    int choice;
 do{
        printf("\nPress 1: Push\nPress 2: PoP\nPress 3: PeeP\nPress 4:travel\nPress 5: Exit\n");

        printf("Enter Your Choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peep();
            break;

            case 4:
            travel();
            break;

            case 5:
            return 0;

            default:
            printf("Enter Valid Input :\n");
            break;
        }
    }
    while(1);

    return 0;
}

void push(){
	if(top == max - 1){
	        printf("Stack is full...\n");
	        return ;
	    }
	    top++;
	    printf("Enter Element : ");
	    scanf("%d",&arr_of_stack[top]);
	    printf("Element Added Sucessfully :\n");
	    return ;
}
void pop(){
    if(top == -1){
        printf("Stack is Empty!!!");
        return ;
    }

    top--;
    printf("Element Removed: %d\n", arr_of_stack[top]);
    return ;
}
void peep(){
    if(top == -1){
        printf("Stack is Empty..!");
        return ;
    }
    printf("| %d |\n",arr_of_stack[top]);
    return ;
}
void travel(){
    if(top == -1){
        printf("Stack is Empty..!");
        return ;
    }
    for(int i=top; i>=0; i--){
     printf("| %d |\n",arr_of_stack[i]);
    }

    return ;
}



