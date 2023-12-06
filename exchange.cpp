//creare un array di 20 celle, generare dei valori casuali e stamparli in ordine crescente con exchangesort.

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
srand(time(NULL)); //ho usato srand per resettare il seed e generare sempre numeri diversi

int A[20], i, var1;

for (i=0; i<20; i++)
{
    A[i]=rand()%100;
}

for  (i=0; i<19; i++)
{
    for  (int j=i+1; j<20; j++)
    {
        if (A[i]>A[j])
        {
            var1=A[i];
            A[i]=A[j];
            A[j]=var1;
        }
    }
}

cout<<"i numeri sono: "<<endl;

for(i=0;i<20;i++)
{
    cout<<A[i]<<" ";
}

return 0;
}
