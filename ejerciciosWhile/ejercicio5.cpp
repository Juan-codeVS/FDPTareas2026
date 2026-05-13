
#include <iostream>
using namespace std;
int main()
{
    int Numero;
    int suma = 0;
    int contador = 1;
    cout << "Ingresa un numero Limite (N)" << endl;
    cin >> Numero;
    while (Numero>= contador )
    {
        if (contador % 2 == 0){
            suma += contador;
            
        }
        contador++;
    }
    
        cout << " La suma de los numeros pares hasta N es:" << suma<< endl;

    
    return 0;
}