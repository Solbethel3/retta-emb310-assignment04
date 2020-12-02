#include<assert.h>
#include"stack.h"
#include"stdio.h"
int main() {
   

    // push two items in to the stack 
   int result0 = 100;
   int result1 = 101;
   
   push(result0);
   push(result1);
   
   // pop data from stack until empty
   while(!isempty()) {
      int data = pop();
   }  
   
   //initilize stack
   stack_init();
   
   int result2;
   int result3;
   int result4;
    
   result0 = 102;
   result1 = 103;
   result2 = 104;
   result3 = 105;
   result4 = 106;
   
   // push five items in to the stack 
   push(result0);
   push(result1);
   push(result2);
   push(result3);
   push(result4);
   
   // pop data from stack until empty
   while(!isempty()) {
      pop();
   } 

   return 0;
}
