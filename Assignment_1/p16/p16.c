/*
 * p16.c
 *
 *  Created on: 09-Aug-2024
 *      Author: root
 */
#include<stdio.h>
#include<string.h>
#define max 5

char stack1[max];
char stack2[max];
char stack3[max * 2];

int main(){
printf("Enter the String of Stack1 : ");
scanf("%s",stack1);

printf("Enter the String Stack2 : ");
scanf("%s",stack2);



int i = strlen(stack1) - 1;
int j = strlen(stack2) - 1;

int k = -1;

while(i != -1 || j != -1){
		if(i != -1){
			stack3[++k] = stack1[i--];
		}
		if(j != -1){
			stack3[++k] = stack2[j--];
		}
}
stack3[++k] = '\0';

	printf("\n The Merged Stack = %s",stack3);

	return 0;
}
