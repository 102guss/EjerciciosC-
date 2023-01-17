#include "iostream"
               //con este programa hasta podemos hacer una calculadora
using namespace std;
int main()
{
    int opcion = 0;
    
    
    do
    {
        cout << "Ingrese 1 para mostrar mensaje\n";
        cout << "Ingrese 2 para hacer algo mas\n";
        cout << "Ingrese 0 para salir\n";

        cout << "Ingrese una opcion a ejecutar\n";
        cin >> opcion;
    }
    //Mostramos el menú hasta que la opción sea cero
    while(opcion != 0);
    //system("PAUSE");
    
    return 0;
       

}
    //toda condicion en un ciclo repetitivo tiene que ser verdadero para que este se vuelva a repetir
    
    /*en el bucle "do while", primero se ejecuta el bloque de instrucciones una vez y despues evalúa la condicion 
    para volver a repetir el ciclo*/
