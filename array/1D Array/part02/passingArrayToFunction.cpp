#include<iostream>
using namespace std;
void display (int a[], int size){
    for(int  i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;

}
void change(int b[],int size){// here we can also write *b;
    b[0] = 100;
}
int main(){
    int arr[] = {1,4,2,7,46}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    // we will check whether  the array is pass by value or pass by reference
    display(arr ,size);
    change(arr, size);
    display(arr, size);
}