#include <iostream>
using namespace std;

void relleno(int* arreglo, int tam, int mult);

int main() {
    int tam, mult;
    
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;
    
    cout << "Ingrese el numero para completar con multiplos: ";
    cin >> mult;
    
    int* arreglo = new int[tam];
    
    relleno(arreglo, tam, mult);
    
    cout << "Los multiplos son: ";

     
    return 0;
}




