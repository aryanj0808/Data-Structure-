#include<iostream>
using namespace std;

struct myArray{
    int total_size;
    int used_size;
    int *ptr;

};

void createArray(struct myArray* a, int tSize, int uSize){
    (*a).total_size =tSize;
    (*a).used_size =uSize;
    (*a).ptr = (int *) malloc(tSize*sizeof(int));


}
void  show(struct myArray *a){
    cout<<"LOCAtion :  "<<a->ptr<<endl;
    for(int i=0;i< a->used_size;i++){
        
        cout<<(a->ptr)[i]<<"->";
        
    }
    cout<<"NULL"<<endl;

}
void  set(struct myArray *a){
    cout<<"Enter Numbers"<<endl;
    for(int i=0;i< a->used_size;i++){
        
        cin>>(a->ptr)[i];
        
    }
    

}

int main(){
    struct myArray marks1;
    createArray(&marks1, 10, 2);
    set(&marks1);
    show(&marks1);
    struct myArray marks2;
    createArray(&marks2, 10, 3);
    set(&marks2);
    show(&marks2);
    return 0;
}