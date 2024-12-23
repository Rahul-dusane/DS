/*
 * p13.c
 *
 *  Created on: 06-Aug-2024
 *      Author: root
 */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 50

char stack[max];
int top = -1;

int is_operator(char ch){

    if( ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '%' || ch == '!' || ch == '=' || ch == '.'){
        return 1;
    }
    return 0;
}

void revers(){
    char str[max + 1];

    printf("Enter The String :");
    scanf("%s",str);

    int i;

    for(i=0;str[i];i++){
        if(isalnum(str[i]) || is_operator(str[i])){
            stack[++top] = str[i];
        }
    }

    for(int i=0;str[i];i++){
        if(top != -1){
            str[i] = stack[top--];
        }
    }
    str[i] = '\0';

    printf("Revers String = %s",str);
    return ;
}

int main(){
    revers();
    return 0;
}
