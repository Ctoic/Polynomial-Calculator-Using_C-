#include<iostream>
using namespace std ;

class Node
{
public:
    int data ;
    Node* next ;

};

class List 
{
public:
    Node* head ;
    List()
    {
        head  = NULL;

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


    }

    void insert(int num)
    {
        if(isempty())
        {
            Node* nnode = new Node();
            head  = nnode ;
            nnode->data = num ;

        }
        else
        {
            Node* temp = head ;
            while(temp->next!=NULL)
            {
                temp = temp->next ;


            }
            Node* nnode = new Node();
            nnode->next = temp->next ;
            nnode->data = num ;
            temp->next = nnode;

        }

        

        return ;

    }

    int count()
    {
        int count = 0 ;

        Node* temp = head ;
        while(temp!=NULL)

        {
            count++;
            temp = temp->next;
        }

        return count;


    }
    void insert_index(int num , int index )
    {
        if(index == 0)
        {
            Node* nnode = new Node();
            head  = nnode ;
            nnode->data = num ;

        }
        else
        {
            Node* temp1 = head ;
            for(int i = 0; i<index-2 ;i++)
            {
                temp1= temp1->next;

            }
            Node* temp = new Node();
            temp->next  = temp1->next ;
            temp->data = num ; 
            temp1->next = temp;



        

        }
    }


    void Display()
    {
        Node* temp = head ;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->next ; 

        }
        return ;

    }

};

int main()
{
    List l;
    // l.insert(1);
    // l.insert(3);
    // l.insert(1);
    // l.insert(1);
    // l.insert(1);
    //l.insert(1);
    l.insert_index(2,0);
    l.insert_index(4,1);
    l.insert_index(6,2);
    l.insert_index(5,4);
    l.insert_index(3,3);
    l.Display();
   cout<<"number of Nodes in the list ;"<< l.count()<<endl;
    return 0 ;
}