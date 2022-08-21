#include<iostream>
using namespace std;
int BinarySearch(int arr[], int element, int size){
    int low, mid, high;
    low=0;
    high=size-1;
    
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==element){

            return arr[mid];
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return -1;
}

int main(){
    //Sorted Array
    int arr[]={1, 4, 32, 54, 56, 65, 78};
    int size=sizeof(arr)/sizeof(int);
    
    int searchElemet=BinarySearch(arr, 4, size);

    cout<<searchElemet<<endl;
    return 0;
}