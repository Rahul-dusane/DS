/*
 * p14.c
 *
 *  Created on: 05-Aug-2024
 *      Author: root
 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 50

// Declare global variables
char infix[max];
char postfix[max];
char stack[max];
int top = -1;

// Function declarations
void push();
void pop();
void symbol_scan();

// Function to push an element to the stack
void push(){
    if(top == max - 1){
        printf("Array OverFlow..\n");
        return ;
    }
    top++;
    scanf(" %c",&stack[top]);

    return ;
}

// Function to pop an element from the stack
void pop(){
    if(top == -1){
        printf("Array is Empty...\n");
        return ;
    }
    stack[top]--;
    return ;
}

// Function to check if a character is an operator
int is_operator(char ch){

    if( ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^'){
        return 1;
    }
    return 0;
}

// Function to get the precedence of operators
int prority(char a){
    switch(a){

        case '+':
        case '-':
        return 1;

        case '*':
        case '/':
        return 2;

        case '^':
        return 3;
    }
    return 0;
}

// Function to convert infix expression to postfix expression
void symbol_scan(){
    int j = 0;
    printf("Enter The Infix Expression : ");
    scanf("%s",infix);

    for(int i=0;infix[i];i++){

        if(isalnum(infix[i])){                 //if charecter is alphanumeric thent pop it to postfix[]
            postfix[j++] = infix[i];
        }

        else if(infix[i] == '('){             //if charecter is '(' then push it into stack[]
            if(top < max -1){
                stack[++top] = infix[i];
            }
        }
        else if(infix[i] == ')'){            //if charecter is ')' then pop the stack[] until '(' is found
            while(stack[top] != '(' && top != -1){
                postfix[j++] = stack[top--];
            }
            if(top != -1){                  //it will remove the perenthisis
                top--;
            }
        }
        else if(is_operator(infix[i]) == 1){ //pop the operator from the stack into postfix[] according to the proriry
            while(top != -1 && prority(stack[top]) >= prority(infix[i])){
                postfix[j++] = stack[top--];
            }
            if(top < max - 1){              //push the ooperator to stack[]
                stack[++top] = infix[i];
            }
        }
    }

    while(top != -1){                      //pop all the remaining operators from satck to postfix[]
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';

   printf("\n\nInfix Expresstion In Postfix :\n%s",postfix);

   return ;
}


int main(){
   //function call
   symbol_scan();
    return 0;
}
