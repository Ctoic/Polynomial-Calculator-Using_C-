#include<iostream>
using namespace std ;

// Class Node
class Node
{
    public:
    int data ;
    Node* left ;
    Node* right ;

    Node()
    {
        right = NULL;
        left  = NULL;
        data  = 0;

    }

    
};

class BST
{
    public:
    Node* root ;
    BST()
    {
        root = NULL;

    }

    bool isemtpy()
    {
        if(root == NULL)
        {
            return true ;

        }
        else{

            return false ;

        }
    }

     Node* getnode(int val)
    {
        Node* newnode = new Node();
        newnode->data = val;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
        
    }

 
    Node* insesrt(Node* root , int data )
    {
        if(root == NULL)
        {
            root = getnode(data);
            
        }
        else if(data < root->data)
        {
            root->left = insesrt(root->left,data);
        }
        else 
        {
            root->right = insesrt(root->right,data);
        }
        return root ;
    }

    bool search(Node* root , int val)
    {
        if(isemtpy())
        {
            return false ;

        }
        else if(root->data == val)
        {
            return true ;

        }
        else if(root->data > val)
        {
            search(root->left , val);

        }
        else 
        {
            search(root->right , val);

        }

        return true;
    }
   

};

//main function
int main()
{
    BST bst1;
    Node* root = NULL;
    bst1.insesrt(root , 5);
    bst1.insesrt(root , 3);
    bst1.insesrt(root , 4);
    bst1.insesrt(root , 6);
    bst1.insesrt(root , 7);
    bst1.insesrt(root , 8);

    cout<<"enter a number to find :"<<endl;
    int num;
    cin>>num;

    if(bst1.search(root , num)==true)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
    return 0 ;
}