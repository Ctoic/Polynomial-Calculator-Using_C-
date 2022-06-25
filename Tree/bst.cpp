#include<iostream>
using namespace std;

class bstNode
{
    public:
    int data;
    bstNode *left;
    bstNode *right;
    bstNode()
    {
        left = NULL;
        right = NULL;
    }
    bstNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bstNode* getnode(bstNode* root, int data)
{
    if(root == NULL)
    {
        root = new bstNode(data);
        return root;
    }
    if(data < root->data)
    {
        root->left = getnode(root->left, data);
    }
    else
    {
        root->right = getnode(root->right, data);
    }
    return root;
}

bstNode* insert(bstNode* root, int data)
{
    if(root == NULL)
    {
        root = new bstNode(data);
        return root;
    }
    if(data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

bstNode* search(bstNode* root, int data)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(data == root->data)
    {
        return root;
    }
    if(data < root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}

bstNode* display(bstNode* root)
{
    if(root == NULL)
    {
        cout<<"empty"<<endl;
        return root;


    }
    else 
    {
       
        display(root->left);
         cout<<root->data;
        display(root->right);


        return root;

    }

}

int main()
{
    bstNode* root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 60);

    cout<<"ENter value to be searched :"<<endl;
    int num ;
    cin>>num;
    bstNode* temp = search(root, num);
    if(temp == NULL)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found"<<endl;
    }

    display(root);


    return 0;


}