#include<iostream>
#define M 4
#define N 5
using namespace std ; 


int main ()
{
    //Dynamically allocating memory for the array

    int * A = new int [M*N];
    // -> A = new int [M*N];

    // assign values tp allocated memory 
    for (int i = 0; i<M; i++)
    {
        for(int j = 0;j<N ;j++)
        {
            *(A+i*N+j) = rand()%100;
        }
    }
for( int i = 0; i<M; i++)
{
    for (int j = 0; j<N; j++)
    {
        cout<<*(A+i*N + j)<<" ";

    }
    cout<<endl;

}

delete[] A;






    return 0;
}