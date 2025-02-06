#include<bits/stdc++.h>
using namespace std;
void asquare()
{
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    map<char,ll>mp;
    fl(i,n){
        mp[s[i]]++;
    }
    ll ans = 0;
    for(char ch='A';ch<='G';ch++){
        if(mp[ch]<m){
            ans+=(m-mp[ch]);
        }
    }
    cout<<ans<<"\n";
}
//Main
int main()
{
    Code By Asquare
    // asquare();
    ll t;
    cin>>t;
    fl(i,t)
    {
        asquare();
    }
    return 0;
}