#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int data)
{

    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *p = head;
        while (p->next != NULL)
        { // 1 2 3 4 5 _
            p = p->next;
        }

        p->next = temp;
    }
}

void display(node *head)
{
    if (head != NULL)
    {
        node *p = head;

        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
    else
        cout << "Linked List is empty" << endl;
}

void insertAtHead(node *&head, int data)
{ // 1 2 3 4 5
    node *temp = new node(data);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

// void insertAtPosition(node *&head, int data, int position){
//     int count = 1;
//     node *temp = new node(data), *p = head, *c = head;
//     while(count < position){
//         cout<<position<<" = "<<count<<endl;
//         c = p;
//         if(p -> next != NULL)
//             p = p->next;
//         count++;
//     }
//     temp -> next = p;
//     c -> next = temp;
//     cout<<"Count Value is: "<<count<<" "<<p->data<<" "<<c->data<<endl;
//     // while(count < position){
//     //     cout<<position<<" = "<<count<<endl;

//     //     if(p == NULL){
//     //         cout<<"error"<<endl;
//     //         break;
//     //     }else {
//     //         c = p;
//     //         p = p->next;
//     //         count++;
//     //     }

//     // }
//     // cout<<"Count Value is: "<<count<<" "<<p->data<<" "<<c->data<<endl;

// }

void deleteData(Node *&head, int val){
    Node *p = head, *q = NULL;
    while(p->data != val){
        q = p;
        p = p->next;
    }
    q->next = q->next->next;
    delete(p);
}


void insertAtPosition(Node* &head, int val, int pos){

    Node *temp = new Node(val);
    if(pos == 1){
        temp->next = head;
        head = temp;
        return;
    }

    int count = 1;
    Node* p = head;
    while(count != pos-1){
        if(p == NULL){
            cout<<"Cannot insert"<<endl;
            return;
        }
        p = p->next;
        count++;
    }

    
    temp->next = p->next;
    p->next = temp;
}


// 1 2 3 4 5

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

    cout << "Insert at head" << endl;

    display(head);

    insertAtPosition(head, 6, 5);

    display(head);
}