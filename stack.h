typedef struct nodo_stack * Stack;

//Crea el stack.
Stack crear();

//Ingresa un elemento en el stack
Stack push(Stack st, int dato);

//retorna el primer elemento.
int top(Stack st);

//Imprime todo el stack
Stack printStack(Stack st);