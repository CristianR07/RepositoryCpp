#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#define size 10
using namespace std;

void Sort(int M[size][size], int r, int c) {
    int temp[r*c], l=0;
    int x = r*c;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            temp[l++] = M[i][j]; 
        }
    }
    bool flag;
    do {
        flag = false;
        for (int i = 0; i < x - 1; i++) {
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

int main() { 
    srand(time(NULL));
    int r, c;
    cin >> r;
    cout << endl;
    cin >> c;
    int M[size][size];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            M[i][j] = rand() % 1000;
        }
    }
    Sort(M, r, c);
    cout << setw(10); 
    for (int i = 0; i < r; i++) {
        cout << endl;
        for (int j = 0; j < c; j++) {
            cout << M[i][j] << setw(10);
        }
    }
    return 0;
}