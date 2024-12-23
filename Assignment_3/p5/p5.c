/*
 * p5.c
 *
 *  Created on: 11-Oct-2024
 *      Author: root
 */
#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *right;
	int data;
	struct node *left;
}*tmp = NULL,*curr = NULL,*first = NULL,*last = NULL;

void insert_first(){
	tmp = (struct node *) malloc (sizeof(struct node));

	printf("Enter The Data :");
	scanf("%d",&tmp->data);

	if(first == NULL){
		first = last = tmp;
	}else{
		tmp->right = first;
		first->left = tmp;
		first = tmp;
	}

}

void insert_last(){
	tmp = (struct node *)malloc (sizeof(struct node));
	printf("Enter The Data :");
	scanf("%d",&tmp->data);
	if(first == NULL){
		first = last = tmp;
	}else{
		tmp->left = last;
		last->right = tmp;
		last = tmp;
	}
}

void travers_first(){
	if(first == NULL){
		printf("\nLinked List Is Empty..!");
		return ;
	}else{
		curr = first;
		while(curr != NULL){
			printf("%d",curr->data);
			curr = curr->right;
		}
	}
}

void travers_last(){
	if(first == NULL){
		printf("\nLinkd List Is Empty..!\n");
		return ;
	}else{
		curr = last;
		while(curr != NULL){
			printf("%d",curr->data);
			curr = curr->left;
		}
	}
}

void insert_after(){
	if(first == NULL){
		printf("\nLinked List Is Empty..!");
		return ;
	}else{
		int index , cnt = 1;
		printf("\nEnter The Index :");
		scanf("%d",&index);

		curr = first;
		while(curr->right != NULL && cnt < index){
			curr = curr->right;
			cnt++;
		}
		if(cnt == index){
			tmp = (struct node *) malloc (sizeof(struct node));
			printf("\nEnter The Data :");
			scanf("%d",&tmp->data);

			tmp->right = curr->right;
			tmp->left = curr;

			curr->right = tmp;

			if(curr == last){
				last = tmp;
			}else{
				tmp->right->left = tmp;
			}
		}else{
			printf("\nIndex Not Found...!");
		}
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
			first = first->right;
			first->left = NULL;
		}
	}
	free(tmp);
}

void delete_last(){
	if(first == NULL){
		printf("\nLinked List is Empty...!");
		return ;
	}else{
		tmp = last;
		printf("\n%d Data Is Deleted :",tmp->data);
		if(first == last){
			first = last = NULL;
		}else{
			last = last->left;
			last->right = NULL;
		}
		free(tmp);
	}
}

void delete_perticuler(){
	if(first == NULL){
		printf("\nLinked List NULL...!");
		return ;
	}else{
		int index,cnt = 1;
		printf("\nEnter The Data :");
		scanf("%d",&index);
		curr = first;

		while(curr->right != NULL && cnt < index){
			curr = curr->right;
			cnt++;
		}
		if(index == cnt){
			tmp = curr;
			printf("\n%d Data Is Deleted :",tmp->data);
			if(first == last){
				first = last = NULL;
			}else if(tmp == first){
				first = first->right;
				first->left = NULL;
			}else if(tmp == last){
				last = last->left;
				last->right = NULL;
			}else{
				curr->left->right = curr->right;
				curr->right->left = curr->left;
			}
			free(tmp);
		}
		else{
			printf("\nIndex not Found");
		}
	}
}

int main(){
	int choice;
	do{
		printf("\nEnter Your Choice :");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			insert_first();
			break;
		case 2:
			insert_last();
			break;
		case 3:
			insert_after();
			break;
		case 4:
			travers_first();
			break;
		case 5:
			travers_first();
			break;
		case 6:
			delete_first();
			break;
		case 7:
			delete_last();
			break;
		case 8:
			delete_perticuler();
			break;

		case 9:
			printf("\nYou Are Out Of The Program....\n");
			return 0;

		default:
			printf("\nEnter Valid Choice :");
		}
	}while(1);
	insert_first();
	return 0;
}
