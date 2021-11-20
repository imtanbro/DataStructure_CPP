// #include <iostream>
// using namespace std;
// int queue[100], n = 100, front = - 1, rear = - 1;
// void Insert() {
//    int val;
//    if (rear == n - 1)
//    cout<<"Queue Overflow"<<endl;
//    else {
//       if (front == - 1)
//       front = 0;
//       cout<<"Insert the element in queue : "<<endl;
//       cin>>val;
//       rear++;
//       queue[rear] = val;
//    }
// }
// void Delete() {
//    if (front == - 1 || front > rear) {
//       cout<<"Queue Underflow ";
//       return ;
//    } else {
//       cout<<"Element deleted from queue is : "<< queue[front] <<endl;
//       front++;;
//    }
// }
// void Display() {
//    if (front == - 1)
//    cout<<"Queue is empty"<<endl;
//    else {
//       cout<<"Queue elements are : ";
//       for (int i = front; i <= rear; i++)
//       cout<<queue[i]<<" ";
//          cout<<endl;
//    }
// }
// int main() {
//    int ch;
//    cout<<"1) Insert element to queue"<<endl;
//    cout<<"2) Delete element from queue"<<endl;
//    cout<<"3) Display all the elements of queue"<<endl;
//    cout<<"4) Exit"<<endl;
//    do {
//       cout<<"Enter your choice : "<<endl;
//       cin<<ch;
//       switch (ch) {
//          case 1: Insert();
//          break;
//          case 2: Delete();
//          break;
//          case 3: Display();
//          break;
//          case 4: cout<<"Exit"<<endl;
//          break;
//          default: cout<<"Invalid choice"<<endl;
//       }
//    } while(ch!=4);
//    return 0;
// }
// A complete working C++ program to
// demonstrate deletion in singly
// linked list with class
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node{
public:
	int data;
	Node* next;

	void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// Given a reference (pointer to pointer)
// to the head of a list and a key, deletes
// the first occurrence of key in linked list
void deleteNode(Node** head_ref, int key)
{
	// Store head node
	Node* temp = *head_ref;
	Node* prev = NULL;
	// If head node itself holds
	// the key to be deleted
	if (temp != NULL && temp->data == key)
	{
		*head_ref = temp->next; // Changed head
		delete temp;		 // free old head
		return;
	}
	// Else Search for the key to be deleted,
	// keep track of the previous node as we
	// need to change 'prev->next' */
	else
	{
	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}
	// If key was not present in linked list
	if (temp == NULL)
		return;
	// Unlink the node from linked list
	prev->next = temp->next;
	// Free memory
	delete temp;
	}
}

// This function prints contents of
// linked list starting from the
// given node
void printList(Node* node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}
};

// Given a reference (pointer to pointer)
// to the head of a list and an int,
// inserts a new node on the front of the
// list.


// Driver code
int main()
{
	
	// Start with the empty list
	
	Node* head = new Node();
	Node* p = new Node();
	head = NULL;


	// Add elements in linked list
	p.push(&head, 7);
	p.push(&head, 1);
	p.push(&head, 3);
	p.push(&head, 2);

	puts("Created Linked List: ");
	p.printList(head);

	p.deleteNode(&head, 1);
	puts("\nLinked List after Deletion of 1: ");
	
	p.printList(head);
	
	return 0;
}

// This code is contributed by ac121102
