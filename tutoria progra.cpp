//ejercicio 22 realize un programa que lea de la entrada estandar numeros hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores mayores que cero leidos//
 #include <iostream>

#include<stdlib.h>
using namespace std;

int main() {
    int a, b = 0;

    do {
        cout << "Escribe un numero: "; cin >> a;
        if (a >0) {
            b++;
        }
    } while (a != 0);

    cout << "Hay "<< b <<" numeros mayores que 0" << endl;

    system("pause");
    return 0;
}
