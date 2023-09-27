#include "bracmat.h"

struct Stack { 
    int top; 
    int maxSize; 
    char* array; 
}; 

int isEmpty(struct Stack* stack) 
{ 
    return stack->top == -1; 
}

void pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return; 
    
    stack->array[stack->top--]; 
} 

bool checkPair(char val1,char val2){
    return (( val1=='(' && val2==')' )||( val1=='[' && val2==']' )||( val1=='{' && val2=='}' ));
}

bool checkBalanced(struct Stack* stack, char expr[], int len){
      
    for (int i = 0; i < len; i++)  
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        {  
          push(stack, expr[i]); 
        } 
        else
        {
            // exp = {{}}}
            // if you look closely above {{}} will be matched with pair, Thus, stack "Empty"
            //but an extra closing parenthesis like '}' will never be matched
            //so there is no point looking forward
        if (isEmpty(stack)) 
            return false;
        else if(checkPair(peek(stack),expr[i]))
        {
            pop(stack);
            continue;
        }
        // will only come here if stack is not empty
        // pair wasn't found and it's some closing parenthesis
        //Example : {{}}(]
        return false;
        }
    }    
    return true; 
}

