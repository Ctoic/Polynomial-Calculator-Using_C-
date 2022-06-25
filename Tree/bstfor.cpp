#include<iostream>
using namespace std ;

class Nodebst
{
    public:
    int data ;
    Nodebst* left;
    Nodebst* right;

    Nodebst()
    {
        left = right = NULL;
        data  = 0 ;
    }

};


class BST
{
    public:
    Nodebst* root ;
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

    bool search(int val)
    {
        Nodebst* temp = root ;
        while(temp != NULL)
        {
            if(temp->data == val)
            {
                return true ;
            }
            else if(val < temp->data)
            {
                temp = temp->left ;
            }
            else
            {
                temp = temp->right ;
            }
        }
        return false ;
    }

    void Insert(int val)
    {
        if(root == NULL)
        {
            root = new Nodebst();
            root->data = val;
            return ;
        }
        Nodebst* temp = root ;
        while(temp != NULL)
        {
            if(val < temp->data)
            {
                if(temp->left == NULL)
                {
                    temp->left = new Nodebst();
                    temp->left->data = val;
                    return ;
                }
                else
                {
                    temp = temp->left ;
                }
            }
            else
            {
                if(temp->right == NULL)
                {
                    temp->right = new Nodebst();
                    temp->right->data = val;
                    return ;
                }
                else
                {
                    temp = temp->right ;
                }
            }
        }
    }

    void Display()
    {
        if(root == NULL)
        {
            cout<<"Tree is empty"<<endl;
            return ;
        }
        Nodebst* temp = root ;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            if(temp->left != NULL)
            {
                temp = temp->left ;
            }
            else if(temp->right != NULL)
            {
                temp = temp->right ;
            }
            else
            {
                break ;
            }
        }
        cout<<endl;

        
    }


};



int main()
{
    BST bst ;
    bst.Insert(10);
    bst.Insert(8);
    bst.Insert(40);
    bst.Insert(30);

    int num ;
    cin>>num ;
    if(bst.search(num) == true)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    // Display 
    bst.Display();

    return 0 ;
}