#include<bits/stdc++.h>
using namespace std;
struct Node{
        int data;
        Node *next;
        Node(int d = 0){
                data=d;
                next = NULL;

        }

};

int main(){
//     Node s;
    
//     s.data=20;
//     Node s= Node(10);
//     cout<<s.data<<endl;


// Access data of structure using pointer
        Node *s=new Node(250);
        // WE will use arrow(->) oprator to see data 
        cout<<s->data<<endl;

        // Memory allocation using malloc 
        // Node *h=(Node *)malloc(sizeof(Node));
    
    
}

