#include <iostream>
using namespace std;

int main() {
	
    int n;
    int cantidadPares = 0;
    int cantidadImpares = 0;
    
    cout << "Ingrese la cantidad de numeros en el arreglo: ";
    cin >> n;
    
    int* A = new int[n]; 
    int* pares = new int[n]; 
    int* impares = new int[n]; 
    
     for (int i = 0; i < n; ++i) {
        cout << "Ingrese el numero #" << i + 1 << ": ";
        cin >> A[i];
        
        if (A[i] % 2 == 0) {
            pares[cantidadPares] = A[i]; 
            cantidadPares++; 
        } 
    }

    
    return 0;
}

