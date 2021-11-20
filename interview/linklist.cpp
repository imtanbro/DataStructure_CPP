#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *temp = new node(val);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void insertAtHead(node *&head, int val)
{
    node *temp = new node(val);
    temp->next = head;
    head = temp;

void display(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

void deleteData(node *&head, int val)
{
    node *p = head;
    node *q = NULL;
    if (head->data == val)
    {
        head = head->next;
        delete (p);
    }
    else
    {
        while (p->data != val)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next->next;
        delete (p);
        // 1 2 3 _4_ 5 6
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    insertAtHead(head, 0);
    insertAtTail(head, 6);
    deleteData(head, 4);
    display(head);
}