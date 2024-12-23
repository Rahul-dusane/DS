/*
 * p9.c
 *
 *  Created on: 08-Aug-2024
 *      Author: root
 */

#include<stdio.h>
#define row 50
#define col 50

int a[row];
int b[row][col];

int LB = 0;

void row_major();
void col_major();
void one_d();

int main(){

	int choice;

	do{
		printf("\nPress 1:Location_1D\nPress 2:Location_2D_Row_Major\nPress 3:Location_2D_Column_Major\nPress 4:Exit\n");

	   printf("Enter the choice :");
	   scanf("%d",&choice);

	   switch(choice){
	   case 1:
		   one_d();
			break;

	   case 2:
		   row_major();
		   break;

	   case 3:
		  col_major();
		   break;

	   case 4:
		   printf("\n Your Out Of the Program :\n");
		   return 0;
		   break;

	   default :
		   printf("\nEnter Valid Choice :\n");
	   }

	}while(1);

}

void row_major(){
	int i,j;

	printf("Enter the index Value :");
	scanf("%d",&i);
	if(i < 0 || i >= row){
		printf("Index Out of Rang...!");
		return ;
	}
	printf("Enter the index of column :");
	scanf("%d",&j);

	if(j < 0 || j >= col){
		printf("Index Out Of Rang....!");
		return ;
	}

	int *BA1 = &b[0][0];

	b[i][j] = (int)BA1 + sizeof(i) * (col * (i - LB) + (j - LB));

	printf("The Location Of Index(%d,%d) = %d\n",i,j,b[i][j]);

}

void one_d(){
	int i;
	printf("Enter the index Value :");
	scanf("%d",&i);
	if(i < 0 || i >= row){
		printf("Index Out of Rang...!");
		return ;
	}
	int *LO = &a[0];

	a[i] = (int)LO + sizeof(i) * ( i - LB);

	printf("The Location of index %d = %d",i,a[i]);


}

void col_major(){
	int i,j;

	printf("Enter the index Value :");
	scanf("%d",&i);
	if(i < 0 || i >= row){
		printf("Index Out of Rang...!");
		return ;
	}
	printf("Enter the index of column :");
	scanf("%d",&j);

	if(j < 0 || j >= col){
		printf("Index Out Of Rang....!");
		return ;
	}

	int *BA1 = &b[0][0];

	b[i][j] = (int)BA1 + sizeof(i) * ((i - LB) + row * (j - LB));

	printf("The Location Of Index(%d,%d) = %d\n",i,j,b[i][j]);


}
