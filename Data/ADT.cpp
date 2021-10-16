#include<iostream>
using namespace std;


int find_max( int *array,int size) {

int max = array[0];

for ( int i = 1; i < size; ++i ) {

if ( array[i] > max ) {

max = array[i];

}

}

return max;

}
int main()
{

    int array[]={1,3,4,5,5,6,7,7,6};
    int size = sizeof(array)/sizeof(array[0]);

    // find_max(array , size);
    // ;
    cout<<find_max( array , size)<<endl;







    return 0;
}