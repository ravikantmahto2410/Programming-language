#include<bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin>>t;

    string s;
    cin>>s;

    sort(t.begin(),t.end());
    sort(s.begin(),s.end());

    if (s==t) cout<<true;
    else cout<<false;

    return 0;

}