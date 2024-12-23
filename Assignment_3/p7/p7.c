/*
 * p7.c
 *
 *  Created on: 14-Oct-2024
 *      Author: root
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct mnode{
	int idata;
	char cdata[1];
	struct node *mnext;
}*mtmp = NULL,*mcurr = NULL,*mfirst = NULL,*mlast = NULL;

struct inode{
	int idata;
	struct node *inext;
}*itmp = NULL,*icurr = NULL,*ifirst = NULL,*ilast = NULL;

struct cnode{
	char cdata[1];
	struct node *cnext;
}*ctmp = NULL,*ccurr = NULL,*cfirst = NULL,*clast = NULL;

void insert_last(){
	mtmp = (struct mnode *)malloc(sizeof(struct mnode));
	mtmp->mnext = NULL;
	printf("Enter the integer :");
	scanf("%d",&mtmp->idata);
	printf("Enter the charecter :");
	scanf("%s",mtmp->cdata);
	insert_lasti(mtmp->idata);
	insert_lastc(mtmp->cdata);
	if(mfirst == NULL){
		mfirst = mlast = mtmp;
	}else{
		mlast->mnext = mtmp;
		mlast = mtmp;
	}
}

void insert_lasti(int d){
	itmp = (struct inode *)malloc(sizeof(struct inode));
	itmp->idata = d;
	itmp->inext = NULL;

	if(ifirst == NULL){
		ifirst = ilast = itmp;
	}else{
		ilast->inext = itmp;
		ilast = itmp;
	}
}

void insert_lastc(char c[1]){
	ctmp = (struct cnode *)malloc(sizeof(struct cnode));
	strcpy(ctmp->cdata,c);
	ctmp->cnext = NULL;
	if(cfirst == NULL){
		cfirst = clast = ctmp;
	}else{
		clast->cnext = ctmp;
		clast = ctmp;
	}
}

void travers(){
	if(mfirst == NULL){
		printf("\nLinked List Is Empty...!\n");
		return ;
	}
	mcurr = mfirst;
	printf("\n\nThe Data Is Given Below :\n");

	while(mcurr != NULL){
		printf("| %d  %s|---",mcurr->idata,mcurr->cdata);
		mcurr = mcurr->mnext;
	}

	icurr = ifirst;
	printf("\n\nThe Data Is Given Below :\n");
	while(icurr != NULL){
		printf("| %d |---",icurr->idata);
		icurr = icurr->inext;
	}

	ccurr = cfirst;
	printf("\n\nThe Data Is Given Below :\n");
	while(ccurr != NULL){
		printf(" | %s |---",ccurr->cdata);
		ccurr = ccurr->cnext;
	}
}

int main(){

    int choice;
    do{
        printf("\nPress 1 to Insert Last");
        printf("\nPress 2 to Traverse");
        printf("\nPress 3 to Exit");

        printf("\nEnter Your Choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            insert_last();
            break;

            case 2:
            travers();
            break;

            case 3:
            printf("\nYou Are Out Of The Program....");
            return 0;

            default:
            printf("\nEnter valid Choice...!");
        }
    }while(1);

    return 0;
}
