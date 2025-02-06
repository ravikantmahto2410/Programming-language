#include<iostream>
using namespace std;

int main(){
    int x=5;
    int*p=&x;

    cout<<&x<<endl;//this is printting the memory address of x
    cout<<p<<endl;//this also prints the  same memory address 

    return 0;
}