#include<stdio.h>

int main(){
  int x = 1, y = 2, z[] = {999, 222, 111, 343};
  int *ip; // apunta a un entero
  int *ipp;

  // ip apunta a x o ip tendrá la dirección de x
  ip = &x;
  ipp= &z[0];
  printf("\nx está en la dirección: %d",ip);                        //mostrando la direccion de x atraves de una variable tipo apuntador
  printf("\nx tiene el valor: %d",*ip);                             //mostrando el valor del apuntador que apunta a la direccion de la variable x


  printf("\nx tiene el valor: %d",x);                               //x vale lo que vale  x

  printf("\nz[0] = %d",z[0]);                                       //imprimiendo el primer elemento del arreglo Z
  printf("\nz[0] = %d",z);                                         //imprimiendo la direccion del primer elemento del array (que es su definicion)
  
  //como imprimo la direccion de memoria del primer alemento del arreglo?, pues como le hice a x

printf("\nLa diteccion de z[0] es: %d", ipp);                  //es correcto
printf("\nLa diteccion de z[0] es: %d", *ipp);                //otra forma de mostrar el elemento de un arreglo atraves de punteros


  return 0;
}


/*nota: cuando decimos que una variable apunta a otra, se refiere a que la otra le pasa su direccion de memoria a la primera.
Esto ocurre a tra ves de l operador &   */
