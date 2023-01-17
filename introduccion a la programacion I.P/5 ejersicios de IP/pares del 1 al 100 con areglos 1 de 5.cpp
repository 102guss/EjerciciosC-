//Realice un progra que rellene un areglo con los numeros pares comprendido entre 1 y 100 y los muestre en pantalla.

#include <stdio.h>


int main(void)
{
            int x,cont,z,i,tabla[100];
           
            i=0;
            for (x=1;x<=100;x++)
            {
        cont=0;
        if (x%2==0)
        {
           tabla[i]=x;
           i++;
        }
    }
           
            for (x=0;x<i;x++)
            {
        printf("%d\n",tabla[x]);
    }
           
   fflush(stdin);
   getchar();
}

