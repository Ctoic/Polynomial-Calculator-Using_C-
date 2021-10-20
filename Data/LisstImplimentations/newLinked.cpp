#include<iostream>
using namespace std;

class Node{
    public:
    int data ; 
    Node* next ; 


};


int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocating memory in the heap

    head = new Node();
    second = new Node();
    third = new Node();

    // Now providing Values and pointer to the next Node 

    head->data= 1;
    head->next= second;

    second->data=3;
    second->next=third;

    third->data=4;
    third->next=NULL;
    



    return  0 ;
}