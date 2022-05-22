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
    Node *head;

public:
    Insertion()
    {
        head = NULL;
    }
    // Insertion at Beginning with O(1) time complexity
    void Insertion_at_Beginning(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {

            newnode->next = head;
            head = newnode;
        }
    }
    // Insertion at END with O(n) time complexity
    void Insertion_at_End(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {

            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newnode;
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
    in.Insertion_at_End(10);
    in.Insertion_at_End(30);
    in.Insertion_at_End(20);
    in.Insertion_at_Beginning(50);
    in.display();
}