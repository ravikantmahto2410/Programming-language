#include<iostream>
using namespace std;
void display(int a[]){//here the new array is not formed but here adress of arr is passed 
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void change(int b[]){//here also the new array is not formed but here adress of arr is passed 
    b[0]=100;
}
int main(){
    int arr[5]={1,4,2 ,7,46};
    //accessing the elements of array in another function
    display(arr);
    change(arr);
    display(arr);
    return 0;
}