#include<iostream>
using namespace std;

void Double(int *array, int size)
{
    int doub =0;
    for(int i =0; i<size; i++)
    {
        array[i]=2*array[i];

    }
}

int main()
{
    int array[]={1,3,4,5,6,6,6};
    int size = sizeof(array)/sizeof(array[0]);

    Double(array, size);
    for (int i = 0 ; i<size;i++)
    {
        cout<<array[i]<<endl;

    }


    return 0;
}