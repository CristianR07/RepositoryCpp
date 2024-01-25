//creare una matrice, chiedere il numero di righe e colonne, popolarla e ordinarla.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));
    int r, c;

    cout << "inserisci il numero di righe" << endl;
    cin >> r;
    cout << "inserisci il numero di colonne" << endl;
    cin >> c;

    int M[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            M[i][j] = rand() % 1000;
        }
    }

    int temp[r * c], l = 0;
    int x = r * c; //dimensione array temporaneo

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++, l++) {
            temp[l] = M[i][j];
        }
    }

    bool flag;
    do {
        flag = false;
        for (int i = 0; i < x - 1; i++) {
            if (temp[i] > temp[i + 1]) {
                swap(temp[i], temp[i+1]);
                flag = true;
            }
        }
    } while (flag);

    l = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++, l++) {
            M[i][j] = temp[l];
        }
    }

    cout << setw(10);
    for (int i = 0; i < r; i++) {
        cout << endl;
        for (int j = 0; j < c; j++) {
            cout << M[i][j] << setw(10);
        }
    }
    return 0;
}
