//Programma per trovare la resistenza equivalente in un circuito ohmnico semplice
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    char risposta1[3];
    int n_rp;
    int n_rs;
    float RPeq = 0;

    cout << "Ci sono resistenze in parallelo? si/no ";
    cin >> risposta1;

    while (strcmp(risposta1, "si") == 0) {
        cout << "Inserisci il numero di resistenze in parallelo: ";
        cin >> n_rp;

        float valt_rp = 0;

        for (int i = 0; i < n_rp; i++) {
            cout << "Inserisci il valore in ohm della " << i + 1 << "a resistenza: ";
            float val;
            cin >> val;

            valt_rp += pow(val, -1);
        }

        RPeq += pow(valt_rp, -1);

        cout << "Ci sono altre resistenze in parallelo? si/no ";
        cin >> risposta1;
    }

    cout << "Ci sono resistenze in serie? si/no ";
    cin >> risposta1;

    if (strcmp(risposta1, "si") == 0) {
        cout << "Inserisci il numero di resistenze in serie: ";
        cin >> n_rs;

        float valt_rs = 0;

        for (int i = 0; i < n_rs; i++) {
            cout << "Inserisci il valore in ohm della " << i + 1 << "a resistenza: ";
            float val;
            cin >> val;

            RPeq += val;
        }
    }

    cout << "La resistenza equivalente totale e': " << RPeq <<" ohm";
    return 0;
}
