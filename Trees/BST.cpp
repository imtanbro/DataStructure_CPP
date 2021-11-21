#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Tree
{
    node *root;

public:
    // void insertElement(int data){
    //     node *temp = new node(data);
    //     if(root == NULL){
    //         root = temp;
    //     }else if(root -> data > data){
    //         root -> left = temp;
    //     }else{
    //         root -> right = temp;
    //     }
    // }

    // This wont work as we need to use recursive function in order to ad element till the end;

    node *insertElement(node *root ,int data)
    {
        // node *temp = new node(data);
        if (root == NULL)
        {
            return new node(data);
        }
        else if (root->data > data)
        {
            root->left = insertElement(root-> left, data);
        }
        else if(root->data == data) return root;
        else
        {
            root->right = insertElement(root -> right, data);
        }
    }
};

int main()
{
}