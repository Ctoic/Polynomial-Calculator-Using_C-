#include<iostream>
using namespace std;


class Node 
{
    public:
    int data ;
    Node* next;


};
// Given pointers to pointers to add element at the front of linked list
void push(Node** head_ref, int new_data)
{
Node* new_node = new Node();
new_node->data= new_data;
new_node->next= (*head_ref);
(*head_ref)=new_node;



}
void insertAfter(Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
 
    /* 2. allocate new node */
    Node* new_node = new Node();
 
    /* 3. put in the data */
    new_node->data = new_data;
 
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;
 
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}
void append(Node** head_ref,int new_data)
{
    Node* new_node= new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return ;

    }

    //else treverse all of the linked list 
    while (last->next !=NULL)

    {
        last= last->next;

    }

    last->next = new_node;
    return ;

    


}
// This function will print all the element of the linked list bbuddy
void print(Node* node)
{
    while (node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;

    }

}

int main()
{
    // start with an empty list pa;
    //Linked list is >NULL
    Node* head = NULL;

    // Insert 6 Node in the list 6->NULL
    // Linked List will be 6->Null

    append(&head,6);

    // Insert Seven at the beginnning 
    //Linked List will be 7->6->NULL

    push(&head,7);

    //Insert 1 at the beginning
    // 1->7->6->NULL
    push(&head,1);

    // Insert 4 at the end 
    //1->7->6->4->NULL

    append(&head , 4);

    //inssert 9 after 7 so 
    //1->7->9->6->4->NULL
    insertAfter(head->next ,9);

    // created linked list
    cout<<"created Linked List sucessfully"<<endl;
    print(head);




    // 


    return 0;

}