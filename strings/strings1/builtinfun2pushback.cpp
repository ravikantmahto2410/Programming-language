#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="acbd";
    cout<<str<<endl;
    str.push_back('e');
    str.push_back('f');
    str.push_back('g');
    str.push_back('h');
    cout<<str<<endl;

    //now pop back
    str.pop_back();//this will delete the last character of the string 
    cout<<str<<endl;
    
    return 0;
}