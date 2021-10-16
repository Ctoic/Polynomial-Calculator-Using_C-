#include<iostream>
using namespace std ;
 

int main()
{
    int array[3][3] = {{1,3,4},{1,2,5},{1,6,7}};


    for(int i  = 0;i <3; i++)

    {
        for( int j= 0; j<3; j++)
        {
            if (array[i]==array[j])
            cout<<2*array[i][j];
        }
        cout<<endl;
    }



    return 0;
}