//mostly people think that arrays and pointers are same but the reality is different.
// We can confirm it by using sixeof function to look at the allocated memory
// People get confused because array name always represent the firsrt Element's Address

/*Pointers are used for storing address of 
dynamically allocated arrays and for arrays
 which are passed as arguments to functions.
  In other contexts, arrays and pointer are
   two different things, see the following
  programs to justify this statement. */ // copied from GeeksForGeeks 
#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,4,5,6};
    int* ptr=array;

    cout<<"Now we will compare array with pointer "<<endl;
    cout<<sizeof(array)<<endl;
    cout<<sizeof(ptr)<<endl;

    // Array name gives first address of the element of array
    for(int i = 0 ; i<5;i++)
    {
        if (&array[i]==array)
        {
            cout<<"True they are equal Array name gives us address of frst element "<<endl;
        }
    }

    // We cannot add Addresses to array variable 

    return 0 ;
}





