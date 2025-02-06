#include<iostream>
using namespace std;
// this is code written by me itself 
int main(){
    int a,b;
    cin>>a>>b;
    int* ptr=&a;
    int* ptr2=&b;
    cout<<(*ptr) * (*ptr2);
}    