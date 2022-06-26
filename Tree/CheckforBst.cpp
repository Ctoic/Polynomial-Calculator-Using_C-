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
  Nodebst* root;
  
  BST()
  {
    root = NULL;
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
                    cout<<"Inserted "<<val<<" in left of "<<temp->data<<endl;
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
                    cout<<"Inserted "<<val<<" in right of "<<temp->data<<endl;
                    return ;
                }
                else
                {
                    temp = temp->right ;
                }
            }
        }
    }
    
    // function for binary search tree chceck 
    
   bool isBST(Nodebst* root)
    {
        if(root == NULL)
        {
            return true ;
        }
        if(root->left != NULL)
        {
            if(root->left->data > root->data)
            {
                return false ;
            }
        }
        if(root->right != NULL)
        {
            if(root->right->data < root->data)
            {
                return false ;
            }
        }
        return isBST(root->left) && isBST(root->right);
    }


};

int main()
{
  BST b1;
  b1.Insert(2);
  b1.Insert(3);
  b1.Insert(1);
    
  
  if(b1.isBST(b1.root)==true)
  {
    cout<<"It's a BST"<<endl;
  }
  else
  {
    cout<<"It is not a BST "<<endl;
  }
  
  return 0;
  }
