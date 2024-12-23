/*
 * p10.c
 *
 *  Created on: 25-Jul-2024
 *      Author: root
 */

#include<stdio.h>
#define max 5
int arr_of_stack[max];
int top = -1;



int main(){
    int choice;

    do{
        printf("\nPress 1: Push\nPress 2: PoP\nPress 3: PeeP\nPress 4:travel\nPress 5: Exit\n");

        printf("Enter Your Choice :");
        scanf("%d",&choice);
        switch(choice){
		case 1:
		if(top == max - 1){
				printf("Stack is full...\n");
				return 0;
			}
			top++;
			printf("Enter Element : ");
			scanf("%d",&arr_of_stack[top]);
			printf("Element Added Sucessfully :\n");

		break;

		case 2:
			if(top == -1){
					printf("Stack is Empty!!!");
					return 0;
				}

				top--;
				printf("Element Removed: %d\n", arr_of_stack[top]);
		break;

		case 3:
			if(top == -1){
					printf("Stack is Empty..!");
					return 0;
				}
				printf("| %d |\n",arr_of_stack[top]);
		break;

		case 4:
			if(top == -1){
					printf("Stack is Empty..!");
					return 0;
				}
				for(int i=top; i>=0; i--){
				 printf("| %d |\n",arr_of_stack[i]);
				}

		break;

		case 5:
			printf("You Are Out Of The Program :\n");
		return 0;

		default:
		printf("Enter Valid Input :\n");
		break;
        }
    }
    while(1);

    return 0;
}


