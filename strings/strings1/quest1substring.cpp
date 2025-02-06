#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    //abcdefgh -> n=8
    int n=str.length();
    cout<<str.substr(n/2);
    return 0;
}