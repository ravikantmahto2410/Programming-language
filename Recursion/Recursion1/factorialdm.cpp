#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBYDXJK";
    string str = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    cout<<str;
}
