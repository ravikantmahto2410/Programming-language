#include<bits/stdc++.h>
using namespace std;

int main(){
    //["flower","flow","flight"];
    vector<string>v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    //lexographically print
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}