#include<iostream>
using namespace  std;

void swap(int *xp ,int *yp)
{
    int temp = *xp ;
    *xp  = *yp;
    *yp = temp;

}

void BubbleSort(int arr[],int n )
{

    int i ,j;
    for (i = 0 ;i<n-1;i++)
        for(j= 0 ; j<(n-1)-1;j++)
        if(arr[j]>arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
}
void Printsorted(int arr[],int size)
{
    cout<<"Sorted list below"<<endl;
    for(int i = 0 ; i<size ; i++)
        cout<<arr[i]<<" ";

}


int main()
{ 
    int arr[]={23,4,5,6,6,7,5,3,24,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,n);

    Printsorted(arr,n);
    
    return 0;
}