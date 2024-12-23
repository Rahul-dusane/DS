/*
 * p12.c
 *
 *  Created on: 30-Jul-2024
 *      Author: root
 */


#include<stdio.h>
#define max 5
int array_of_stack[max];
int top_value = -1;
int *top = &top_value;

void push();
void pop();
void peep();
void traversal();

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
           traversal();
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
	if( *top >= max - 1 ){
		printf("Stack Is Full...\n ");
		return ;
	}
	printf("Enter Your Element : \n");
	scanf("%d",&array_of_stack[++(*top)]);

	return ;
}

void pop(){
	if( *top == -1){
		printf("Stack Is Empty....\n");
		return ;
	}
	--(*top);
	printf("The Top Element Is Remover :\n");

	return ;
}

void peep(){
	if( *top == -1){
		printf("Stack Is Empty....\n");
		return ;
	}
	printf("\n| %d |",array_of_stack[*top]);
	return ;
}

void traversal(){
	if(*top == -1){
		printf("Stack Is Empty...\n");
		return ;
	}
	for(int i= *top ; i >= 0 ; i--){
		printf("| %d |\n",array_of_stack[i]);
	}
	return ;
}
