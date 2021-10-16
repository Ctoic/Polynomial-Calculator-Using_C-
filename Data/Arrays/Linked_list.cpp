#include<iostream>
using namespace std ;
// in a linked list elements are linked using pointers


class Node {
    public:
    int data;
    Node* next;

}; 


void print_List(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"";
        n=n->next;

    }
}



int main()
{
    // simple linked list with three nodes

    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
 
    //Alocating 3 nodes in the heap
    head = new Node();
    second =new Node();
    third=new Node();

    // now we have three allocated memories 
    // we have pointers to memory head second and third


    head-> data= 1;
    head -> next=second;

    head -> data =2;
    head-> next=third;

    head -> data =3;
    head -> next=NULL;

    // Traversing the link list 




    print_List(head);






    return 0;

}