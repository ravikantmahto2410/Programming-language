#include<iostream>
using namespace std;
void display (int a[], int size){//here array a is acting as a pointer to the first element of the element defined in main;
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void change(int b[] , int size){
    b[0]=100;
}
int main(){
    int arr[]={1,4,2,7,46};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);

    return 0;
}