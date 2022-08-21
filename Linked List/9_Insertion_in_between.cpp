#include<iostream>
using namespace std;
class Insertion{
    struct Node{
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
    };
    Node *head;
    public:
    Insertion(){
        head=NULL;
    }
    int insertionAtBeginning(int data){
        Node *newnode=new Node(data);
        if(head==NULL){

            head=newnode;
        }
        else{

            newnode->next=head;
            head=newnode;
        }

    }
    int insertionInBetween(int data, int req){
        Node *newnode=new Node(data);
        if(head==NULL){

            head=newnode;
        }else{
            Node *Current=head;
            while(Current->next!=NULL){
                if(Current->data!=req){
                    newnode->next=Current->next;
                    Current->next=newnode;
                    break;
                }
                Current=Current->next;
            }
            
        }
    }
    void display(){
        cout<<head<<"-->   ";
        while(head!=NULL){
            cout<<head->data<<" | "<<head->next<<" -->   ";
            head=head->next;
        }
        cout<<endl;
    }
};

int main(){
    Insertion f;
    f.insertionAtBeginning(20);
    f.insertionAtBeginning(23);
    f.insertionInBetween(50,20);
    f.display();
    

}