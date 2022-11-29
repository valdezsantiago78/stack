#include <iostream>
#include "stack.h"
#include "helper.h"

struct nodo_stack 
{
    int dato;
    Stack sig;
};

Stack crear()
{
    return NULL;
};

bool isEmpty(Stack st)
{
    return (st == NULL);
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

Stack pop(Stack & st)
{
    Stack primero = st;
    Stack segundo = st->sig;

    if(st != NULL)
    {
        delete primero;
        st = segundo;
        return st;
    }

    return primero;
};

int top(Stack st)
{
  return st->dato;
};

Stack printStack(Stack st)
{
    Stack primero = st;

    while(st!=NULL)
    {
        std::cout << "Stack -> " << st->dato << std::endl;
        st = st->sig;
    }

    return primero;
};

Stack destroy(Stack & st)
{

    while(st!=NULL)
    {
        st = destroy(st->sig);
        delete st;
    }

    return st;
};