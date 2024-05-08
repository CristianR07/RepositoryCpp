#include <iostream>
#include <string>

using namespace std;

struct casa {
    float m2;
    string classe;
    float costo;
    float costo_m2;
};

int main() {

    casa Case[3];

    for (int i = 0; i < 3; i++) {
        cout << "inserisci i metri quadri della " << i + 1 << " casa: ";
        cin >> Case[i].m2;
        cout << "inserisci la classe energetica della " << i + 1 << " casa: ";
        cin >> Case[i].classe;
        cout << "inserisci il costo della " << i + 1 << " casa: ";
        cin >> Case[i].costo;
    }

    float costomin = Case[0].costo / Case[0].m2;
    int indicecostomin = 0;

    for (int i = 1; i < 3; i++) {
        Case[i].costo_m2 = Case[i].costo / Case[i].m2;
        if (Case[i].costo_m2 < costomin) {
            costomin = Case[i].costo_m2;
            indicecostomin = i;
        }
    }

    string classemigliore = Case[0].classe;
    int indiceclassemig = 0;

    for (int i = 1; i < 3; i++) {
        if (Case[i].classe < classemigliore) {
            classemigliore = Case[i].classe;
            indiceclassemig = i;
        } else if (Case[i].classe == classemigliore) {
            if (Case[i].costo_m2 < Case[indiceclassemig].costo_m2) {
            indiceclassemig = i;
            }
        }
    }

    cout<<"La casa col costo minore e' la "<<indicecostomin+1<<" e costa: "<<costomin<< " al metro quadrato." <<endl;
    cout<<"La casa con la migliore classe energetica e il miglior costo al metro quadrato e' la "<<indiceclassemig+1<<endl;
}
