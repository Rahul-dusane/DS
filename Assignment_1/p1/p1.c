/*
 * p1.c
 *
 *  Created on: 25-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int *p1=&a[0];
	int *p2=&a[0];

	if(p1==p2){
		printf("pointer p1 and p2 are Located at same Location :\n");
	}

	p1++;
	if(p1 != p2){
		printf("pointer p1 and p2 are Not Located at same Location :\n");
	}
return 0;

}

