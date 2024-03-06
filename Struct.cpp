//dati da gestire cognome, nome, num telefono, data nascita, operazioni da fare: creare struttura, inserire almeno 10 record, cancellare un record ed ordinare.
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct identita {
    char nome[30];
    char cognome[30];
    char numero_telefono[20];
    int anno;
    int mese;
    int giorno;
};

int main() {

    int n_persone = 10;
    identita Persone[n_persone] = {
        {"Gervaldo", "Scoli", "+39987654321", 1991, 3, 14},
        {"Giovanni", "Caruso", "+39123456789", 2003, 6, 21},
        {"Piero", "Sesti", "+39234567890", 2004, 11, 8},
        {"Salvo", "Giordano", "+39091452799", 1999, 5, 17},
        {"Mario", "Rossi", "+39901234567", 1990, 7, 23},
        {"Carla", "Ferdi", "+39456789012", 1983, 3, 25},
        {"Anna", "Volenti", "+39567890123", 1970, 6, 30},
        {"Giorgio", "Nero", "+39678901234", 1995, 9, 5},
        {"Laura", "Giacomini", "+39789012345", 1988, 12, 10},
        {"Paolo", "Spuppa", "+39890123456", 1978, 4, 15}
    };

    for (int i = 0; i < n_persone; i++) {
        cout << "Nome: " << Persone[i].nome <<
        ", Cognome: " << Persone[i].cognome <<
        ", Numero telefonico: " << Persone[i].numero_telefono <<
        ", Data di nascita: " << Persone[i].anno << "/" << Persone[i].mese << "/" << Persone[i].giorno <<endl<<endl;
    }

    char scelta[3];
    cout << "Vuoi rimuovere qualcuno?" << endl;
    cin >> scelta;
    cout << endl;

    if (strcmp(scelta, "si") == 0) {
        int elem;
        cout << "Inserisci il numero di chi vuoi rimuovere:" << endl;
        cin >> elem;
        cout << endl;

        for (int i = elem - 1; i < n_persone - 1; i++) {
            Persone[i] = Persone[i + 1];
        }
        n_persone--;
    }

    for (int i = 0; i < n_persone - 1; i++) {
        for (int j = i + 1; j < n_persone; j++){
            if (strcmp(Persone[i].nome, Persone[j].nome) > 0){
                swap(Persone[i].nome, Persone[j].nome);
            }
        }
    }

    for (int i = 0; i < n_persone; i++) {
        cout << "Nome: " << Persone[i].nome <<
        ", Cognome: " << Persone[i].cognome <<
        ", Numero telefonico: " << Persone[i].numero_telefono <<
        ", Data di nascita: " << Persone[i].anno << "/" << Persone[i].mese << "/" << Persone[i].giorno << endl << endl;
}
}
