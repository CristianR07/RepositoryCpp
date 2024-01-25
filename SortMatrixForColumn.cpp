//creare una matrice, chiedere il numero di righe e colonne, popolarla e ordinarla per singola colonna.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    srand(time(NULL));
    int r, c;

    cout<<"inserisci il numero di righe"<<endl;
    cin>>r;
    cout<<"inserisci il numero di colonne"<<endl;
    cin>>c;

    int M[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            M[i][j] = rand()%1000;
}
}
for(int i=0; i<c;i++){
    for(int j=0; j<r-1;j++){
        for(int k=0;k<r-j-1;k++){
            if (M[k][i]>M[k+1][i]){
                swap(M[k][i], M[k+1][i]);
}
}
}
}
cout<<setw(10);
for (int i=0; i<r; i++){
        cout<<endl;
        for (int j=0; j<c; j++){
            cout<<M[i][j]<<setw(10);
}
}
return 0;
}
