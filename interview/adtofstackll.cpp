#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    public:
    node(int val){
        data = val;
        next = NULL;
    }

};

class stack{
    
    node *top;
    public:
    stack(){
        top = NULL;
    }
    bool isEmpty(){
        if(top == NULL){
            return true;
        }else return false;

    }
    void push(int data){
        node *temp = new node(data);
        temp -> next = top;
        top = temp;
    }
    void pop(){

        node *temp = top;

        if(isEmpty())
            cout<<"Stack Underflow"<<endl;
        else{
            top = top -> next;
            delete(temp);
        }
    }
    void display(){
        node *p = top;
        while(p != NULL){
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    }
    void peek(){
        cout<<top->data<<endl;
    }
    void size(){
        int count = 0;
        node *p = top;
        while(p != NULL){
            count++;
            p = p->next;
        }
        cout<<count<<endl;
    }
};

int main(){

    stack s;
    s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    s.pop();
    s.display();
    s.size();
    s.peek();
    s.push(5);
    s.push(6);
    s.display();
    s.push(7);
s.display();

}