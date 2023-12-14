//Eseguire un programma in grado di popolare un array, la quale dimensione è data dall'utente. Mantenendo integro l'array in forma originale realizza un funzione di ordinamento crescente e decrescente.
#include <iostream>
using namespace std;

void crescente(int A[], int n) {
    int i;
    bool flag;
    do {
          flag = false;
          for (i = 0; i < n - 1; i++) {
              if (A[i] > A[i + 1]) {
                  swap(A[i], A[i + 1]);
                  flag = true;
              }
          }
       } while (flag);
}
int main() {
    //chiedere la dimensione dell'array
    int n;
    cout << "inserisci la dimensione dell'array: ";
    cin >> n;
    //chiedere i numeri da inserire nell'array
    int A[n];
    cout << "inserisci i numeri nell'array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    //stampare l'array
    cout << "l'array e': ";
    for (int i = 0; i < n - 1; i++) {
        cout << A[i] << ", ";
    }
    cout << A[n - 1] << ". " << endl;
    //stampare l'array in ordine crescente
    crescente(A, n);
    cout << "in ordine crescente e': ";
    for (int i = 0; i < n - 1; i++) {
        cout << A[i] << ", ";
    }
    cout << A[n - 1] << ". " << endl;
    //stampare l'array in ordine decrescente
    cout << "in ordine decrescente e': ";
    for (int i = n - 1; i > 0; i--) {
        cout << A[i] << ", ";
    }
    cout << A[0] << ". " << endl;

    return 0;
}
