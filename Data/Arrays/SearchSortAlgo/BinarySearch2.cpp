#include<iostream>
using namespace std;

int BinaraySearch(int array[],int first, int last, int key )
{
    if(last>=first)
    {
    int mid = (first+last)/2;

    if (array[mid] == key )
         return mid;

    if(array[mid]>key)
        return BinaraySearch(array, first,mid-1,key );

    return BinaraySearch(array,mid+1,last, key);

    }

    return -1 ; 

}


int main(void)
{
    int array[]={1,2,3,4,5,6,7,8,9,9,12,14};
    int Key=12;
    int n = sizeof(array)/sizeof(array[0]);

    int result = BinaraySearch(array,0,n-1,Key);
    (result== -1)?cout<<"The given number is not present ": cout<<"The key is at the index :"<<result<<endl;





    return 0 ;
}