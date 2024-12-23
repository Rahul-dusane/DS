/*
 * p3.c
 *
 *  Created on: 25-Jul-2024
 *      Author: root
 */

#include<stdio.h>
int min_element(int *,int);
int max_element(int *,int);
int main(){
	int n;
	printf("Enter the size of the array :\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The maximum element of the array = %d\n",max_element(&a,n));
	printf("The minimum element of the array = %d\n",min_element(&a,n));


	return 0;
}
int max_element(int *a,int n){
	int max;
	for(int i=0;i<n;i++){
		if(max < *(a+i)){
			max = *(a+i);
		}
	}
	return max;
}
int min_element(int *a,int n){
	int min=*(a+0);
	for(int i=0;i<n;i++){
		if(min > *(a+i)){
			min = *(a+i);
		}
	}
	return min;
}


