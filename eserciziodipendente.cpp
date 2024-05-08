#include <iostream>
#include <string>

using namespace std;

struct dipendente{
    string nome;
    string cognome;
    float salario;
    struct DATA_ASSUNZIONE{
    int giorno;
    int mese;
    int anno;
    }dataassunzione;
    string dipartimento;
};

int main(){
    int n = 2;
    dipendente Persone[n];

    for (int i = 0; i < n; i++) {
        cout << "inserisci il nome del " << i + 1 << " dipendente: ";
        cin >> Persone[i].nome;
        cout << "inserisci il cognome del " << i + 1 << " dipendente: ";
        cin >> Persone[i].cognome;
        cout << "inserisci il salario del " << i + 1 << " dipendente: ";
        cin >> Persone[i].salario;
        cout << "inserisci il giorno di assunzione del " << i + 1 << " dipendente: ";
        cin >> Persone[i].dataassunzione.giorno;
        cout << "inserisci il mese di assunzione del " << i + 1 << " dipendente: ";
        cin >> Persone[i].dataassunzione.mese;
        cout << "inserisci l'anno di assunzione del " << i + 1 << " dipendente: ";
        cin >> Persone[i].dataassunzione.anno;
        cout << "inserisci il dipartimento del " << i + 1 << " dipendente: ";
        cin >> Persone[i].dipartimento;
    }

    float salarioalto = Persone[0].salario;
    int indicesalario = 0;

    for (int i = 0; i < n; i++) {
        if (Persone[i].salario > salarioalto) {
            salarioalto = Persone[i].salario;
            indicesalario = i;
        }
    }

    float giorno = Persone[0].dataassunzione.giorno;
    float mese = Persone[0].dataassunzione.mese;
    float anno = Persone[0].dataassunzione.anno;
    int indicedata = 0;

    for (int i = 0; i < n; i++) {
    if (Persone[i].dataassunzione.anno < anno) {
        indicedata = i;
    } else if (Persone[i].dataassunzione.anno == anno && Persone[i].dataassunzione.mese < mese) {
        indicedata = i;
    } else if (Persone[i].dataassunzione.anno == anno && Persone[i].dataassunzione.mese == mese && Persone[i].dataassunzione.giorno < giorno) {
        indicedata = i;
    }
}

cout<<"Il dipendente col salario piu' alto e' "<<Persone[indicesalario].nome<<" e guadagna: "<<salarioalto<<endl;
cout<<"Il dipendente piu' anziano e' "<<Persone[indicedata].nome<<", assunto nel "<<Persone[indicedata].dataassunzione.anno<<endl;
}
