#include<iostream>
using namespace std;

int main() {
    int n;
    int suma = 0;
    float contadorCero = 0.0; 

    cout << "Ingrese la cantidad de numeros enteros: ";
    cin >> n;
    
    int* numeros = new int[n]; 
    
    for(int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        
     
       
    }

    
    


    return 0;
}

