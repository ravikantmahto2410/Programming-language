#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="abcdef";
    //for printing the specific str
    //s.substr(idx,len)
    cout<<s.substr(2,4);//we can leave length if we want to take all the string after 2
    return 0;
}