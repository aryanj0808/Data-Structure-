#include <bits/stdc++.h>
using namespace std;
class Insertion
{
    struct Node
    {
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
    Node *head, *tail;

public:
    Insertion()
    {
        head = NULL;
        tail = NULL;
    }
    // Insertion at END with O(1) time complexity
    void Insertion_At_End(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
    }
    // Disply elemets which are in linked list
    void display()
    {
        Node *current = head;
        if (head == NULL)
        {
            cout << "NULL";
        }
        else
        {
            while (current != NULL)
            {
                cout << current->data << "->";
                current = current->next;
            }
            cout << "NULL";
        }
    }
};
int main()
{
    Insertion in = Insertion();
    in.Insertion_At_End(10);
    in.Insertion_At_End(20);
    in.Insertion_At_End(30);
    in.display();
}