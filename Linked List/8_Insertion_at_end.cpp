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
    int insertionAtEnd(int data){
        Node *newnode=new Node(data);
        if(head==NULL){

            head=newnode;
        }else{
            Node *Current=head;
            while(Current->next!=NULL){
                Current=Current->next;
            }
            Current->next=newnode;
        }
    }
    void display(){
        
        while(head!=NULL){
            cout<<head->data<<"->";
            head=head->next;
        }
        cout<<endl;
    }
};

int main(){
    Insertion f;
    f.insertionAtEnd(20);
    f.insertionAtEnd(23);
    f.display();

}