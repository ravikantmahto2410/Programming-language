#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string word="";
    string maxword="";
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            maxword==max(maxword,word);
            word="";
        }
        else{
            word+=s[i];
        }
    }
    maxword=max(maxword,word);
    cout<<maxword<<endl;
    return 0;
}