#include<iostream>
using namespace std;

int main(){
    int x=5;
    int*ptr=&x;
    int** p=&ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;//this prints the address of x;

    cout<<p<<endl;// we are storing the adress of ptr in p. so in this statement we  are getting the address of ptr

}