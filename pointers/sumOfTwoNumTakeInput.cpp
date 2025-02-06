#include<iostream>
using namespace std;

int main(){
    int x, y;
    int*p1=&x;
    int*p2=&y;

    cout<<"Enter the first number : ";
    cin>>*p1;//also here we can take input from by using x instead of ponter
    cout<<"Enter the second number : ";
    cin>>*p2; 

    cout<<*p1+*p2;// here if we use x and y instead of *p1 and *p2 we will get the same answer
    return 0;
}