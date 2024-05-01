//verifica se in un' array si trovano doppioni e in caso li elimina
#include <iostream>
using namespace std;

void controllaarray(int A[], int& n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
                for (int k = j; k < n - 1; k++) {
                    A[k] = A[k + 1];
                }
                n--;
            }
        }
    }
}

int main(){
    int n = 6;
    int A[6] = {4, 4, 3, 6, 3, 6};

    controllaarray(A, n);

    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }

}
