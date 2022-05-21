//Linked List using struct and pointer
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int d=0){
        data=d;
        next=NULL;
    }
};
int main(){
    Node *head=new Node(10);//data1
    // cout<<head;
   
    head->next=new Node(20);//Assigning data2 in next node of data1
    head->next->next=new Node(30);//Assiging data3 in next node of data2

    while(head!=0){
        cout<<head->data<<endl;
        head=head->next;
    }

    
}