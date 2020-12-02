/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STACK_H__
#define __STACK_H__

void stack_init(void);
int isempty();
int isfull ();    
int pop() ;
void push(int data); 

#endif