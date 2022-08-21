#include<iostream>
using namespace std;

int findElement(int arr[], int n, int size){
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            cout<<n<<" is Present in array"<<endl;
            return 1;
        }
    }
    cout<<n<<" is not prensent in array"<<endl;
    return -1;
}

int main(){

    int arr[100]={1, 4, 54, 65, 78, 56, 32};
    int size=7;
    findElement(arr, 5, size);
    return 0;
}