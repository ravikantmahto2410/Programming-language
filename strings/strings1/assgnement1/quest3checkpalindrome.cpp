#include<bits/stdc++.h>
using namespace std;
// this is method one for solving this pallinddrome quetsion 
// i  failed to solve this is copied from solution
bool ispalindrome(string s){
    int n=s.size();
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;

    ispalindrome(s)?cout<<"Yes , a palindrome ":cout<<"Not a palindrome";
    return 0;

}