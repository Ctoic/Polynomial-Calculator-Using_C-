#include<iostream>
using namespace std;

int main()
{
     int A[]={1,3,4,5,5};
     cout <<*A<<endl;



    //  cout<<*A<<endl;
    //  cout<<&A<<endl;
    //  cout<<&A[0]<<endl;



    // cout<<A<<endl;
    // cout<<&A[0]<<endl;
    // cout<<A[0]<<endl;
    // cout<<*A<<endl;

    for (int i =0; i<5;i++)
    {
        cout<<A+i<<endl;
        cout<<&A[i]<<endl;
        cout<<A[i]<<endl;
        cout<<*(A+i)<<endl;
    }
    

    return 0;  
}