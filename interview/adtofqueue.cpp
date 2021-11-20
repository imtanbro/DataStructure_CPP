#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int head;
        int tail;
        int q[100];
        int capacity;
    
    public:
        Queue(int size){
            head = -1;
            tail = -1;
            capacity = size;
        }

        void enqueue(int data){
            if(head == -1){
                q[++head] = data;
                tail++;
            }else if(tail == capacity -1){
                cout<<"Queue is Full"<<endl;
            }else{
                q[++tail] = data;
            }
        }

        void dequeue(){
            if(head == -1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            head++;

        }

        void display(){
            for(int i = head; i <= tail; i++){
                cout<<q[i]<<" ";
            }
            cout<<endl;
        }


        void size(){
            cout<<tail - head + 1<<endl;
        }

};

int main(){
    Queue q(5);
    q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.enqueue(6);
    q.size();
    q.enqueue(7);
    q.display();

}