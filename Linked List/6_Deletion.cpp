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

//Deletion in Linked list with O(n) time complexity
    void Deletion(int dataToDel){
        Node *current=head;
        //When list is empty
        if(head == NULL)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        //Delete head node
        else if(head->data == dataToDel){
            head=head->next;
            free(current);
            return;
        }
    
        else{
            //Check values in all node in list 
            while(current->next!=NULL && current->next->data!=dataToDel){
                current =current->next;
            }
            //If value is not in list
            if(current->next==NULL){
                cout<<"Data does not exits"<<endl;
                return;
            }

            else{
                Node *nodeToDel = current->next;
                current->next = current->next->next;
                free(nodeToDel);
            }
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
            cout << "NULL\n";
        }
    }
};

//Main Function
int main()
{
    Insertion in = Insertion();
    in.Insertion_At_End(10);
    in.Insertion_At_End(20);
    in.Insertion_at_Beginning(30);
    in.Insertion_at_Beginning(40);
    in.Insertion_At_End(50);
    in.Insertion_At_End(60);
    in.Insertion_at_Beginning(70);
    in.display();
    in.Deletion(10);
    in.display();
    in.Deletion(70);
    in.display();
    in.Deletion(60);
    in.display();
}