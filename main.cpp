#include <iostream>
#include "helper.h"
#include "stack.h"

using namespace std;

void ImprimirOpciones()
{
    
   Print("1. Crear stack");
   Print("2. Ingresar un elemento");
   Print("3. Retornar primer elemento");
   Print("4. Imprimir Stack");
   Print("5. Borrar el tope");
   Print("6. Borrar todo");
   Print("0. Salir");
   Print("===============================================");
};

void Menu()
{
   Print("Bienvenido a el menu de STACK.");
   Print("===============================================");
   
   int opcion = 99;
   bool creado = false;
   Stack cola;

   while(opcion!=0)
   {
        Print("Ingrese una opcion > ");
        cin >> opcion;
 
        if(opcion == 1 && !creado)
        {
            Print("Creando Stack ...");
            creado = true;
            cola = crear();
        }
        else if(opcion == 2 && creado)
        {
            int elem;
            Print("Ingresando un elemento al principio de el Stack...");
            Print("Ingrese un numero a el stack:");
            cin >> elem;
            cola = push(cola, elem);
            Succes("Número ingresado!");

        }
        else if(opcion == 3 && creado)
        {
            Print("Retornando el elemento de le principio de el Stack...");
            cout << top(cola) << endl;
        }
        else if(opcion == 4 && creado)
        {
            if(isEmpty(cola))
            {
                Error("Stack vacio");
            }
            else
            {
                Print("Stack completo: ");
                printStack(cola);
            }
        }
        else if(opcion == 5 && creado)
        {
            if(cola != NULL)
            {
                Print("Eliminando primer elemento ...");
                cola = pop(cola);
            }
            else
            {
                Error("No existen elementos para eliminar");
            }
        }
        else if(opcion == 6 && creado)
        {
            cola = destroy(cola);

            Succes("Stack eliminado.");
        }  
        else if(opcion == 0)
        {
            Error("Me re fui...");
        }
        else
        {
            Error("Opcion incorrecta, ten en cuenta que se debe crear primero el stack para comenzar.");
        }
   }
    
   

};

int main()
{
    Menu();
    return 1;
};