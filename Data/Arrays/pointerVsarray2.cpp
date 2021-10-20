#include<iostream>
using namespace std;


int main()
{
    int array[]={1,3,4,5,5};
    for(int i = 0 ; i<5;i++)
    {
        cout<<*(array+i)<<endl;

    }
    cout<<"element 1:"<<array[1]<<endl;

    cout<<"Done with travresng "<<endl;


    return 0;
}