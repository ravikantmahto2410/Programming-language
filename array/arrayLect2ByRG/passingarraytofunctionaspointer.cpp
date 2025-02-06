#include<iostream>
using namespace std;
void display (int a[]){//here array a is acting as a pointer to the first element of the element defined in main;
    int size=sizeof(a)/sizeof(a[0]);// here this will generate error or warning for correct code see usuallysizeispassed.cpp
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void change(int b[]){//here technically int b[] is acting as pointer to array or we can also write int*b meaning will be same
    b[0]=100;
}

int main(){
    int arr[]={1,4,2,7,46};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr);
    change(arr);
    display(arr);

    return 0;
}