#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#define size 10
using namespace std;

void Sort(int M[size][size], int r, int c) {
    int temp[r*c], l=0;
    int dim = r*c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++, l++) {
            temp[l] = M[i][j];
        }
    }
    bool flag;
    do {
        flag = false;
        for (int i = 0; i < dim - 1; i++) {
            if (temp[i] > temp[i + 1]) {
                swap(temp[i], temp[i + 1]);
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
}
void Righe(int M[size][size], int r, int c) {
    for(int i=0; i<r;i++){
    for(int j=0; j<c-1;j++){
        for(int k=0;k<c-j-1;k++){
            if (M[i][k]>M[i][k+1]){
                swap(M[i][k], M[i][k+1]);
}
}
}
}
}
void Colonne(int M[size][size], int r, int c) {
    for(int i=0; i<c;i++){
    for(int j=0; j<r-1;j++){
        for(int k=0;k<r-j-1;k++){
            if (M[k][i]>M[k+1][i]){
                swap(M[k][i], M[k+1][i]);
}
}
}
}
}
void Diagonale(int M[size][size], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int diagonale;
            if (r - i < c) {
                diagonale = r - i;
            } else {
                diagonale = c;
            }

            for (int k = 0; k < diagonale; k++) {
                int prossimaR = i + k + 1;
                int prossimaC = j + k + 1;
                if (prossimaR < r && prossimaC < c &&
                    M[i + k][j + k] > M[prossimaR][prossimaC]) {
                    int temp = M[i + k][j + k];
                    M[i + k][j + k] = M[prossimaR][prossimaC];
                    M[prossimaR][prossimaC] = temp;
                }
            }
        }
    }
}
int main() {
    srand(time(NULL));
    int r, c, scelta;
    cout<<"inserisci il numero di righe"<<endl;
    cin >> r;
    cout << "inserisci il numero di colonne"<<endl;
    cin >> c;
    int M[size][size];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            M[i][j] = rand() % 1000;
        }
    }

    cout<<"con quale metodo vuoi ordinare la matrice?"<<endl<<
    "1: per riga"<<endl<<"2: per colonna"<<endl<<"3: in diagonale"<<endl<<"4: intera matrice"<<endl;
    cin>>scelta;

    switch(scelta)
    {
    case 1:
    Righe(M, r, c);
    cout << setw(10);
    for (int i = 0; i < r; i++) {
    cout << endl;
    for (int j = 0; j < c; j++) {
        cout << M[i][j] << setw(10);
    }
    }
    break;
    case 2:
    Colonne(M, r, c);
    cout << setw(10);
    for (int i = 0; i < r; i++) {
    cout << endl;
    for (int j = 0; j < c; j++) {
        cout << M[i][j] << setw(10);
    }
    }
    break;
    case 3:
    Diagonale(M, r, c);
    cout << setw(10);
    for (int i = 0; i < r; i++) {
    cout << endl;
    for (int j = 0; j < c; j++) {
        cout << M[i][j] << setw(10);
    }
    }
    break;
    case 4:
    Sort(M, r, c);
    cout << setw(10);
    for (int i = 0; i < r; i++) {
    cout << endl;
    for (int j = 0; j < c; j++) {
        cout << M[i][j] << setw(10);
    }
    }
    break;
    default:
        cout<<"scelta non valida";
    }
    return 0;
}
