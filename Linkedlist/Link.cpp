// lINKED lIST iMPLEMENTATION 
//bY NAJAM ALI ABBAS


#include<iostream>
using namespace std ;

class Node
{
    public:
    int data ;
    Node* next ;
    Node()
    {
        data = 0 ;
        next  = NULL;

    }

};

class Link
{
    public:
    Node* head ;
    Link()
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
           return  false ;

        }

      

    }

    Node* getnode(int val)
    {
        Node* newnode = new Node();
        newnode->data = val;
        newnode->next = NULL;


        return newnode;

    }

    bool search(int val)
    {
        if(isempty())
        {
            return false ;
            cout<<"nothing to Display"<<endl;

        }
        else
        {
            Node* temp = head ;
            while (temp->next!=NULL)
            {
                if(temp->data == val)
                {
                    return true ;
                    break;
                }
                else
                {
                    temp = temp->next;

                }
            }

            return false ;
            

         

        }
    }

    void insert(int val)
    {
        Node* temp  = head ;

        if(isempty())
        {
            head = getnode(val);
            return;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            

            temp->next= getnode(val);
            
        }
    }


    void Display()
    {
        Node* temp = head ;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }

        return ;

    }



};

int main()
{
    Link l1;
    l1.insert(3);
    l1.insert(2);
    l1.insert(4);
    l1.insert(5);
    l1.insert(7);

    l1.search(3);


    l1.Display();



    return 0;
}
