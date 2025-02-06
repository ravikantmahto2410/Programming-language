#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    string t;
    cin>>t;
    int m=t.size();
    
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        cout<<true;
    }
    else{
        cout<<false;
    }
    return 0;
}