#include<iostream>
using namespace std;

float rev_min()
{
    int daimeter;
    int speed_kmh;
    float circum;
    float pi=3.12;
    float rev;

    cout<<"Enter value for daimeter and speed in Km/h"<<endl;
    cin>>daimeter>>speed_kmh;
    
    // formula for cicumfrance
    circum=2*pi*daimeter/2;
    //formula for revolutions per minute
    rev=(speed_kmh*1000/3600)/circum;

    return rev;



}

int main()
{
    cout<<rev_min()<<endl;


    return 0;
}