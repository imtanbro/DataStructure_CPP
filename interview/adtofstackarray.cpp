#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int st[100];
    int capacity;

public:
    stack(int size)
    {
        top = -1;
        capacity = size;
    }

    bool isfull(){
        if(top == capacity - 1)
            return true;
        else 
            return false;
    }

    bool isempty(){
        if(top == -1)
            return true;
        else 
            return false;
    }

    void push(int data)
    {
        if (isfull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            st[++top] = data;
        }
    }

    void pop()
    {
        if (isempty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    void display(){
        for(int i=top; i>=0;i--){
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }

    int size(){
        return top+1;
    }

    int peek(){
        return st[top];
    }
};

int main(){
    stack s(6);
    s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    s.pop();
    s.display();
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    s.push(5);
    s.push(6);
    s.display();
    s.push(7);
}