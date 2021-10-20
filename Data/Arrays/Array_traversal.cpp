#include<iostream>
using namespace std;


int main()
{
    int array[]={1,3,4,5,6,6};
    for(int i = 0; i<6;i++)
    {
        cout<<i[array]<<" ";

    }

    // another way of traversing the same array
    cout<<"Second Method "; 
    for(int j = 0 ; j<6; j++)
    {
        
        cout<<array[j]<< "  ";

    }


    return 0;

}