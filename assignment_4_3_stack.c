#include "stack.h"
#define STACK_SIZE 5

int stack[STACK_SIZE];
int top = -1;

void stack_init(void) {
    for(int i=0; i<STACK_SIZE; i++)
    {
        stack[i] = 0;//'\0';
    } 
}

//checks if the stack is empty
int isempty() {
    if(top == -1)
        return 1;
    else
        return 0;
}

//checks if the stack is full
int isfull () {
    if(top == STACK_SIZE)
        return 1;
    else
        return 0;
}

//removes items from the stack
int pop() {	
   if(!isempty()) {
      stack[top] = 0;
      top = top - 1; 
   }
   
      return 0;  
}

//add stack elements to the stack
void push(int data) {
   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   }
}



