/*
 * p2.c
 *
 *  Created on: 25-Jul-2024
 *      Author: root
 */

#include<stdio.h>
int lenght(char *);
int main(){
	char str[30];
	printf("Enter the string :");
	scanf("%s",str);

	printf("The length of the string = %d",lenght(&str));

	return 0;
}
int lenght(char *ch){
	int l=0;


	while(*ch != '\0'){
		l++;
		*ch++;
	}
	return l;
}

