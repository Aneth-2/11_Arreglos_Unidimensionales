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


    return 0;
}

