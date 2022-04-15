#include<iostream>
using namespace std ;

class Node{
public:
    int data;
    Node* next ;

};

class List{
public:

    Node* head ;

    List()
    {
        head = NULL;

    }

    bool isempty()
    {
        if(head == NULL)
        {
            return true;

        }
        else{

            return false;
        }
    }

    void insert(int a )
    {
        if(isempty())
        {
            Node* newnode = new Node();
            Node* temp  = head ;

            newnode->next = head ; 
            newnode->data  = a ;
            head = newnode;

        }
        else
        {
            Node* temp = head ;
            while(temp->next != NULL )
            {
                temp = temp->next ;

            }
            Node* newnode = new Node();
            newnode->data = a ;
            temp->next = newnode;
            newnode->next  = NULL;
                    

        }
    }
    void insert_begin(int num)
    {
        if(head==NULL)
        {
            Node* nnode = new Node();
            nnode->data = num;
            nnode->next = NULL;
            head  = nnode;

        }
        else
        {
            Node* temp1 = head ;
            Node* nnode = new Node();
            nnode->data = num ;
            nnode->next  = temp1;
            head = nnode ;
        }
             

           } 

    void insert_after(int val_find , int val_put)
    {
        Node* temp = head ;
        while(temp->data != val_find)
        {
            temp= temp->next ;

        }

        Node* nnode  = new Node();
        nnode->next  = temp->next ;
        nnode->data  = val_put;
        temp->next  = nnode;
     

    }
// Replaccing a value
void replace(int val , int index)
{
    Node* temp = head ;
    int count_node = 0;
    while(count_node!=index)
    {
        count_node++;
        temp=temp->next ;


    }
    temp->data = val;

}





// Delete Element from the start
    void Delete()
    {
        Node* temp = head;
        temp->next = head->next->next;
        temp->data = head->next->data;
        head = temp ;



    }
// Delete the end Node
void delet_last()
{
    Node* temp = head;
    Node* temp2 = head->next ;

    while(temp2->next!=NULL)
    {
        temp2 = temp2->next ;
        temp = temp->next ;

    }

    temp->next  = temp2->next ;

}

// Deleting an element from the nth position 


int count_occ(int num )
{
    Node* temp = head ;
    int count = 0 ;

    while(temp->next != NULL )
    {
        if(temp->data == num)
        {
            count++;

        }   

    }
    cout<<"Number "<<num<<"Appererd"<<count<<"Times"<<endl;

    return count;


}


    void Display()
{
    Node* temp = head ;
    while(temp->next !=NULL)
    {
        cout<<temp->data<<endl;

        temp = temp->next;



    }

}


}; 

int main()
{

    List l1 ;
    // Inserting at the End 
    l1.insert(3);
    l1.insert(2);
    l1.insert(2);
    l1.insert(1);
    l1.insert(4);
// Inserting at the Front 

    l1.insert_begin(8);
    l1.insert_begin(10);

// Inserrting a number after a given node
    
    l1.insert_after(2 , 4);
    l1.insert_after(4,6);

// Now deleting the Node of a Linked List 
    l1.Delete();

// Deleting From  last 
    l1.delet_last();

// Replacing a value 
    l1.replace(2,4);
    l1.replace(2,1);
    l1.replace(2,0);

// Counting same repeatedly occured numbers 
    l1.count_occ(2);

    l1.Display();


    return  0 ;
}