#include<iostream>
using namespace std ; 
// We use liked list because
// 1. Array size is fixed 
//2. inserting new element is expensive
// But Linked lists are Dynamic size and Ease of insertion/deletion



class Node
{
    public:

    int data ; 
    Node* next ; 

};


int main ()
{
    Node* head = NULL;
    Node* second  = NULL;
    Node * third = NULL;


    // Allocating three nodes in the heaps
    head = new Node();
    second = new Node();
    third = new Node();

    // Now providing the three data and the pointer to the next node
    head->data= 1;
    head->next = second;

    second->data= 2;
    second->next = third;

    third->data= 3;
    second->next = NULL;

    return 0 ;
}