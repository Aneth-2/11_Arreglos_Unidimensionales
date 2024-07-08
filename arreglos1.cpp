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
        
        suma = suma + numeros[i];

         if(numeros[i] == 0) {
            contadorCero = contadorCero + 1.0; 
			
        }			
    }

    float porcentajeCero = (contadorCero / n) * 100.0;
    
    cout << "La sumatoria de los numeros ingresados es " << suma << endl;
    cout << "El porcentaje de valores cero ingresados es " << porcentajeCero << "%" << endl;

    delete[] numeros; 
   
    return 0;
}

