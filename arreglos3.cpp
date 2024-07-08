#include <iostream>
using namespace std;

int main() {
    float tempma[7], tempmin[7], tempme, tempb = 999;
    
    for (int i = 0; i < 7; i++) {
        cout << "Ingrese la menor temperatura del dia " << i + 1 << ": ";
        cin >> tempmin[i];
    
     for (int j = 0; j < i; j++) {
            if (tempmin[i] == tempma[j]) {
                cout << "La temperatura coincide con la temperatura máxima del dia " << j + 1 << endl;
            }
        }

        cout << "Ingrese la mayor temperatura del dia " << i + 1 << ": ";
        cin >> tempma[i];
        
		for (int j = 0; j < i; j++) {
            if (tempmin[i] == tempma[j]) {
                cout << "La temperatura coincide con la temperatura maxima del dia " << j + 1 << endl;
            }
        }

     if (tempmin[i] < tempb) {
            tempb = tempmin[i];
        }

	}
    
    return 0;
}


