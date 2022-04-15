#include <iostream>

using namespace std;



class node
{
public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
    }
};

class linklist
{
public:
    node* head;

    linklist()
    {
        head=NULL;
    }

    void insert(int value, node* after)
    {

        if(head==NULL)
        {
            node* NewNode= new node(value);  
            NewNode->next=NULL;
            NewNode->data=value;
            head=NewNode;
        } 

        else 
        {
            node* curr=head;
            while(curr->next!=NULL)
            {
                curr=curr->next;
            }
                node* NewNode= new node(value);  
                NewNode->next=NULL;
                NewNode->data=value;
                curr->next=NewNode; 
        }
    }

    void display()
    {
        node* curr=head;
        while(curr!=NULL)
        {
            cout<<curr->data;
            curr=curr->next;
        }
    }

};


int main()
{
    linklist l;

    l.insert(8, l.head);
    l.insert(4,l.head);
    l.insert(5,NULL);

    l.display();
    

    return 0;
}