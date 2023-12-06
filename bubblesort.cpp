//creare un array di 20 celle, generare dei valori casuali e stamparli in ordine crescente con bubblesort.

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
srand(time(NULL)); //ho usato srand per resettare il seed e generare sempre numeri diversi

int A[20], i, var1;
bool scelta;

for (i=0; i<20; i++)
{
    A[i]=rand()%100;
}
do
{
    scelta=false;
    for  (i=0; i<19; i++)
    {
        if (A[i]>A[i+1])
            {
                var1=A[i];
                A[i]=A[i+1];
                A[i+1]=var1;
          
                scelta=true;
            }
    }
}while(scelta);

cout<<"i numeri sono: "<<endl;

for(i=0; i<20; i++)
{
    cout<<A[i]<<" ";
}

return 0;
}
