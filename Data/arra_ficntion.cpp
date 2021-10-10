#include<iostream> 
using namespace std;

int sumOfelement(int array[],int size)
{
    int sum = 0;


    for(int i=0; i<size; i++)
    {
        sum+=array[i];

    }

    return sum;
}

int main()
{
    int array[]={1,2,3,4,4,5};

    int size =sizeof(array)/sizeof(array[0]);

    
    cout<<sumOfelement(array,size);
    
    


    return 0;
}