#include <iostream>
#include <string>
using namespace std;

int main() {
    int countFP, countPG;

    cout << "Ingrese el numero de estudiantes de Formacion Profesional (FP): ";
    cin >> countFP;

    string fp[countFP];
    for (int i = 0; i < countFP; i++) {
        cout << "Ingrese el nombre del estudiante de FP #" << i + 1 << ": ";
        cin >> fp[i];
    }
    
    cout << "Ingrese el numero de estudiantes de Postgrado (PG): ";
    cin >> countPG;

   string pg[countPG];
    for (int i = 0; i < countPG; i++) {
        cout << "Ingrese el nombre del estudiante de PG #" << i + 1 << ": ";
        cin >> pg[i];
    }

 cout << "Los nombres repetidos son: " << endl;
    for (int i = 0; i < countFP; i++) {
        for (int j = 0; j < countPG; j++) {
            if (fp[i] == pg[j]) {
                cout << fp[i] << endl;
                break; 
            }
        }
    }



    return 0;
}

