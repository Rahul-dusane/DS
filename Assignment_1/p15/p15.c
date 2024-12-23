/*
 * p15.c
 *
 *  Created on: 01-Aug-2024
 *      Author: root
 */
#include<stdio.h>
#define max 50
int stack[max];
int top = -1;

void push();
void postfix_evaluation();
int is_operator(char );

int main(){

	postfix_evaluation();
	return 0;

}

void push(){
	if(top == max - 1){
		printf("Stack Is Full...\n");
		return ;
	}
	top++;
	scanf("%d",&stack[top]);
	return ;
}

int is_operator(char ch){

    if( ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '%'){
        return 1;
    }
    return 0;
}

void postfix_evaluation(){

	char str[50];

	printf("Enter the string :");
	scanf("%s",str);

	for(int i=0;str[i];i++){
		if((is_operator(str[i])) == 1){
			if(i < 2){
				printf("\n %c operation is not possible at %d ",str[i], i);
				printf("\n");
				return ;
			}
			else{
				int n1=0,n2=0,ans=0;
				n2 = stack[top];
				top--;
				n1 = stack[top];

				switch(str[i]){
				case '+':
					ans = n1 + n2;
					break;
				case '-':
					ans = n1 - n2;
					break;
				case '*':
					ans = n1 * n2;
					break;
				case '/':
					if( n2 <= 0){
						printf("Operation is not possible :\n");
						return ;
					}
					ans = n1 / n2;
					break;
				}
				stack[top] = ans;
			}
		}
		else{
			printf("\nEnter the value of %c = ",str[i]);
			push();
		}
	}
	printf("\n Answer = %d",stack[top]);
	top--;
	return ;
}
