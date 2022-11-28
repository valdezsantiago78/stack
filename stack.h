typedef struct nodo_stack * Stack;

//Crea el stack.
Stack crear();

//Verifica que este vacio el stack
bool isEmpty(Stack st);

//Ingresa un elemento en el stack
Stack push(Stack st, int dato);

// Elimina el tope de s.
// Si no hay elementos no hace nada.
Stack pop(Stack & st);

//retorna el primer elemento.
int top(Stack st);

//Imprime todo el stack
Stack printStack(Stack st);

//Elimina todo el stack.
Stack destroy(Stack & st);