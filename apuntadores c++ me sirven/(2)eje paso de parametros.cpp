// Ejemplo de paso de parámetros
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

    // Paso por referencia. Este sí modifica p ya que se pasó su dirección de memoria
    modificar2(&x);
    printf("\np = %d",x);
	
    return 0;
}
