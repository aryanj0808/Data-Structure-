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
    f.insertionAtBeginning(20);
    f.insertionAtBeginning(23);
    f.display();

}