// Ejemplo de paso de par�metros
# include <stdio.h>
# include <stdlib.h>
// paso por valor
void modificar(int p){
    p = 200;
}

// paso por referencia
void modificar2(int *p){
    *p = 100;
}

int main(){
    int x = 99;

    // Paso por valor. Este no modifica a p
    modificar(x);
    printf("\np = %d",x);

    // Paso por referencia. Este s� modifica p ya que se pas� su direcci�n de memoria
    modificar2(&x);
    printf("\np = %d",x);
	
    return 0;
}
