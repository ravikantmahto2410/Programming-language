#include<bits/stdc++.h>
using namespace std;
//this code is written by me and it is correct .// this is similar to method 1 solved by ma'am
// but in solution video ma'am said can be solved by two methods
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    reverse(s.begin()+n/2,s.end());
    cout<<s;
}