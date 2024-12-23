/*
 * p4.c
 *
 *  Created on: 26-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the array elements : \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int *p;
    p=&a[0];
    printf("\n\n");
    //here pointer p is located to the first element of array and display the value
    printf("%d",*p);

    *p++;
    //Here the pointer is located o the second element of the array and display the value
    printf("\n%d",*p);

    p--;
    //Here the pointer is located to the first element of the array and display the address of second element
    printf("\n%d",p);

    *++p;
    //Here the pointer is located to the second element of the array and display the value
    printf("\n%d",*p);
    return 0;
}



