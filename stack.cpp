#include <iostream>
#include "stack.h"

struct nodo_stack 
{
    int dato;
    Stack sig;
};

Stack crear()
{
    return NULL;
};

Stack push(Stack st, int data)
{
    Stack auxiliar = new(nodo_stack);
    auxiliar->dato = data;
    
    if(st==NULL)
    {
        auxiliar->sig = NULL;
        return auxiliar;
    }
    else
    {
        auxiliar->sig = st;
        st = auxiliar;
        return auxiliar;
    }
};

int top(Stack st)
{
  return st->dato;
};

Stack printStack(Stack st)
{
    Stack iter = st;
    Stack primero = st;
    int count = 1;

    while(iter->sig!=NULL)
    {
        if(count==1)
        {
             std::cout << "First -> " << iter->dato << std::endl;
        }
        else
        {
            std::cout << "Stack -> " << iter->dato << std::endl;
            iter = iter->sig;
        }    
        count=count+1; 
    }

    return primero;
};
