
#include<iostream>
#include <cstddef>


class Node{
     public:
          int data;
          Node *l;
          Node *r;
          Node(int d){
               data = d;
               l = NULL;
               r = NULL;
          }
};

class Solution{
     public: 
          Node* insertdata(Node* root, int data){
               if(root == NULL){
                    return new Node(data);
               } else {
                    Node *cur;
                    if(data <= root -> data){
                         cur = insertdata(root -> l, data);
                         root -> l = cur;
                    } else {
                         cur = insertdata(root -> r, data);
                         root -> r = cur;
                    }
                    return root;
               }
          }

          void preOrder(Node *root){
               if(root == NULL)
                    return;
               
               std::cout<< root-> data << "";
               preOrder(root-> l);
               preOrder(root-> r);
               
          }
          
};
using namespace std;

int main(){
     Solution tree;
     Node* root = NULL;
     
     int t, data;
     cout<<"Enter NUmber of elements: ";
     cin>>t;
     cout<<"\n";
     
     while(t-- > 0){
          cout<<"Enter Data: ";
          cin>> data;
               cout<<"\n";
          root = tree.insertdata(root, data);
          
     }
     
     tree.preOrder(root);
     
     return 0;
}




/*
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

#include<iostream>
#include <cstddef>


class Node {
     public:
          int data;
          Node *l;
          Node *r;
          Node(int d){
               data = d;
               l = NULL;
               r = NULL;
          }
};

class Solution{
     public: 
          Node* insertdata(Node* root, int data){
               if(root == NULL){
                    return new Node(data);
               } else {
                    Node *cur;
                    if(data <= root -> data){
                         cur = insertdata(root -> l, data);
                         root -> l = cur;
                    } else {
                         cur = insertdata(root -> r, data);
                         root -> r = cur;
                    }
                    return root;
               }
          }

          void preOrder(Node *root){
               if(root == NULL)
                    return;
               
               std::cout<< root-> data << "";
               preOrder(root-> l);
               preOrder(root-> r);
               
          }
          
};

int main(){
     Solution tree;
     Node* root = NULL;
     
     int t, data;
    //  cout<<"Enter NUmber of elements: ";
     cin>>t;
    //  cout<<"\n";
     
     while(t-- > 0){
        //   cout<<"Enter Data: ";
          cin>> data;
            //    cout<<"\n";
          root = tree.insertdata(root, data);
          
     }
     
     tree.preOrder(root);
     
     return 0;
}
}; //End of Solution
 */
 


