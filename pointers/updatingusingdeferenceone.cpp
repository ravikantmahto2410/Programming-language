#include<iostream>
using namespace std;

int main(){
    int x=122;
    int*p=&x;
    cout<<x<<endl;
    *p=6;//this will update without using the variable x;
    cout<<x<<endl;
}