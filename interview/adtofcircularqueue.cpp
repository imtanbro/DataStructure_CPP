#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int head;
    int tail;
    int q[100];
    int capacity;
    int size;

public:
    Queue(int d)
    {
        head = -1;
        tail = -1;
        capacity = d;
        size = 0;
    }

    void enqueue(int data)
    {

        if ((size == capacity) || (head - 1 == tail))
        {
            cout << "Queue is Full" << endl;
        }
        else if (head == -1)
        {
            q[++head] = data;
            tail++;
            size++;
        }
        else
        {
            tail = (tail + 1) % capacity;
            q[tail] = data;
            size++;
        }
    }

    void dequeue()
    {
        if (head == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            if (size == 1)
            {
                head = tail = -1;
                size--;
            }
            else
            {
                head = (head + 1) % capacity;
                size--;
            }
        }
    }

    void display()
    {
        int i = head;
        while (i != tail)        
        {
            cout << q[i] << " ";
            i = (i+1)%capacity;
        }
        cout << endl;
    }

    void sizes()
    {
        cout << size << endl;
    }
};

int main()
{
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
    q.display();
    q.sizes();
    q.display();
    q.enqueue(7);
    q.display();
}