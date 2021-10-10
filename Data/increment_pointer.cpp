// Call by refrence 
// efficent way to save memory

#include<iostream>
using namespace std;

void increment(int *p)
{
    *p=*p+1;

}

void incre(int a )
{

    a+=1;
}



int main()
{
    int a=10;
    increment(&a);
    cout<<"The value of a is "<<a<<endl;

    // calling the function with call by value
    incre(a);

    cout<<"The value after calling by refrence :"<<a<<endl;



    return 0;
}