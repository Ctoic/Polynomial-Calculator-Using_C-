#include<iostream>
using namespace std ;

class Node
{
public:
    int data ;
    Node* next ;

};

class Linkedlist
{
public:
    Node* head ;
    Linkedlist()
    {
        head = NULL;

    }
    bool isempty()
    {
        if(head == NULL)
        {
            return true ;

        }
        else 
        {
            return false ;

        }

    void Insert_at_begin(int num)
    {
        Node* nnode = new Node();
        Node* temp = head ;
        nnode->next = temp ;
        nnode->data  = num ;

    }
    

};

int main()
{


    return 0 ;
}