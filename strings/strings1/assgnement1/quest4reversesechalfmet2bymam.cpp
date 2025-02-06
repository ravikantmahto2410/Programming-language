#include<bits/stdc++.h>
using namespace std;

void myReverse(string &s,int begin, int end){
    for(int i=begin;i<=(begin+end)/2;i++){
        swap(s[i],s[begin+end-i]);
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    //reverse
    myReverse(s,n/2,n-1);
    cout<<s;
    return 0;

}