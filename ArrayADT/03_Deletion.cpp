#include<iostream>
#include<stdio.h>
 using namespace std;
//Traversal
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" | ";
    }
    cout<<endl<<endl;
}
// deletion 
int indexDeletion(int arr[], int size, int index){
    
    for(int i=index;i<size-1;i++){

        arr[i]=arr[i+1];
    }
    
    
    return 1;

}
int indexNoSquenceInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){return -1;}
    
    arr[size]=arr[index];
    arr[index]=element;
    
    return 1;
}
int main(){

    int capacity=100, element=7, size=7, index=3;
    int arr[100]={1,2,6,7,10,14,16};
    display(arr, size);

    indexDeletion(arr, size, index);
    size=size-1;
    display(arr, size);
    

    // indexNoSquenceInsertion(arr, size, 500, capacity, 3);
    // size=size+1;
    // display(arr, size);

    return 0;
 }