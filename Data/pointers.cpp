#include<iostream>
using namespace std;

int main()
{

    // int num=23;

    // int *location;
    // location=&num;


    // cout<<"Memory location of given variable:"<<location<<endl;
    // cout<<"Value at location is ::"<<*location<<endl;

    //========array pointer======//
    int array[4]={1,2,4,5};
    int *arr;

    arr=&array[4];

    for(int i=0;i<4;i++)
    {
        cout<<&array[i]<<endl;

        cout<<array[i]<<endl;


    }



    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;




    return 0;
       
}