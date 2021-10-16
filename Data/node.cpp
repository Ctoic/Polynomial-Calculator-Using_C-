#include<iostream>
using namespace std;

class Node{
    public:
  int data ;
  Node*  next;
  
};

Node* head ;
void insert(int x)
{
    Node* temp = new Node();
    temp->data=x;
    temp->next=head;
    head = temp;
    
}

void print()
{
    Node* temp = head ;
    cout<<"List is :"<<endl;
    while(temp!=NULL)
    {
        
        cout<<temp->data;
        temp= temp->next;
        }
        cout<<endl;
}


int main()
{
    
    Node* head = NULL;
    cout<<"How many numbers in the list:"<<endl;
    int n, x;
    
    cin >>n;
    
    for (int i = 0 ; i<n ; i++)
    {
        cout<<"Enter the numbers "<<endl;
        cin>>x;
        
        insert(x);
        print();
        
    
    }


    
    return 0 ;
    
}