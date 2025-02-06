#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="abcdef";
    cout<<s<<endl;
    // reverse(s.begin(),s.end());
    reverse(s.begin() + 3,s.end());  // Where 2  is the index  from where we want to reverse   (1 based) index number
    cout<<s<<endl;
}