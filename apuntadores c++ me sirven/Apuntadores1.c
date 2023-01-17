#include <stdio.h>

int main()
{
    int a, b, *c, *d;
    a=19;
    b=73;
    c=&a;                                       //la variable c, apunta  a la direccion de memoria de "a", por tanto el valor de c, es lo que vale a
    d=&b;
    
    printf("Variable a: \n");
    printf("\t\t (%p) es la direccion en memoria \n ",&a);
    printf("\t\t (%d) es el valor almacenado \n", a);

  
    printf("Variable c: \n");
    printf("\t\t (%p) es la direccion en memoria \n ",c);
    printf("\t\t (%d) es el valor almacenado \n", *c);
    *c=1000;                                                           //se modifica el valor de a, a traves del puntero c.
    printf("\nEl valor modificado de la variable a , vale: %d",a);
    printf("\nEl valor modificado de la variable c , vale: %d",*c);    //tanto "a" como "c", siguen apuntado a la misma direccion de memoria. 

 

    return 0;
}
