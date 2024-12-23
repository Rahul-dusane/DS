/*
 * p2.c
 *
 *  Created on: 07-Oct-2024
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*first = NULL,*last = NULL,*tmp = NULL,*curr = NULL;

void insert_first();
void insert_last();
void insert_after();
void travers();
void delete_last();
void delete_first();
void delete_perticuler();
void sort_data_a();
void sort_data_d();

void insert_first(){
	tmp = (struct node *) malloc (sizeof(struct node));
	printf("\nEnter The Data : ");
	scanf("%d",&tmp->data);
	if(first == NULL){
		first = last = tmp;
	}else{
		tmp->next = first;
		first = tmp;
	}
	last->next = first;
}

void insert_last(){
	tmp = (struct node *) malloc (sizeof(struct node));
	printf("\nEnter The Data : ");
	scanf("%d",&tmp->data);
	if(first == NULL){
		first = last = tmp;
	}else{
		tmp->next = first;
		first = tmp;
	}
	last->next = first;
}

void insert_after(){
	if(first == NULL){
		printf("\nLinked List Is Empty...!");
		return ;
	}else{
		int index , cnt = 1;
		printf("\nEnter The Number Of Index : ");
		scanf("%d",&index);
		curr = first;
		while(curr->next != NULL && cnt < index){
			curr = curr->next;
			cnt++;
		}
		if(cnt == index){
			tmp = (struct node *) malloc (sizeof(struct node));
			printf("\nEnter The Data : ");
			scanf("%d",&tmp->data);
			tmp->next = curr->next;
			curr->next = tmp;
			if(curr == last){
				last = tmp;
			}
		}else{
			printf("\nIndex Not Found...!");
		}
	}
}

void travers(){
	if(first == NULL){
		printf("\nLinked List Is Empty...!");
		return ;
	}else{
		curr = first;
		printf("|");
		while(curr->next != first){
			printf(" %d |",curr->data);
			curr = curr->next;
		}
	}
}

void delete_first(){
	if(first == NULL){
		printf("\nLinked List Is Empty...!");
		return ;
	}else{
		tmp = first;
		printf("\n%d Data Deleted From The List.",tmp->data);
		if(first == last){
			first = last = NULL;
		}else{
			first = first->next;
			last->next = first;
		}
		free(tmp);
	}
}

void delete_last(){
	if(first == NULL){
		printf("\nLinked List Is Empty...!");
		return ;
	}else{
		tmp = last;
		printf("\n%d Data Deleted From The List.",tmp->data);
		if(first == last){
			first = last = NULL;
		}else{
			curr = first;
			while(curr->next != last){
				curr = curr->next;
			}
			last = curr;
			last->next = first;
		}
		free(tmp);
	}
}

void delete_perticuler(){
	if(first == NULL){
		printf("\nLinked List Is Empty...!");
		return ;
	}else{
		int index , cnt = 1;
		printf("Enter the Number Of Index That You Want To Remove : ");
		scanf("%d",&index);
		tmp = first;
		while(tmp->next != first && cnt < index){
			tmp = curr;
			tmp = tmp->next;
			cnt++;
		}
		if(cnt == index){
			printf("\n%d Data Deleted From The List.",tmp->data);
			if(first == last){
				first = last = NULL;
			}else if(tmp == first){
				first = first->next;
				last->next = first;
			}else if(tmp == last){
				last = curr;
				last->next = first;
			}else{
				curr->next = tmp ->next;
			}
			free(tmp);
		}else{
			printf("\nIndex Not Found...!\n");
		}
	}
}

void sort_data_a(){
	struct node tmp;
	for(struct node *i = first; i != NULL; i = i->next ){
		for(struct node *j = first; j != NULL; j = j->next){
			if(i->data < j->data){
				tmp.data = i->data;
				i->data = j->data;
				j->data = tmp.data;
			}
		}
	}

}

void sort_data_d(){
	struct node tmp;
		for(struct node *i = first; i != NULL; i = i->next ){
			for(struct node *j = first; j != NULL; j = j->next){
				if(i->data > j->data){
					tmp.data = i->data;
					i->data = j->data;
					j->data = tmp.data;
				}
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
			travers();
			break;
		case 5:
			delete_first();
			break;
		case 6:
			delete_last();
			break;
		case 7:
			delete_perticuler();
			break;
		case 8:
			sort_data_a();
			travers();
			break;
		case 9:
			sort_data_d();
			travers();
			break;
		case 10:
			printf("\nYou Are Out Of The Program....\n");
			return 0;

		default:
			printf("\nEnter Valid Choice :");
		}
	}while(1);
	insert_first();
	return 0;
}
