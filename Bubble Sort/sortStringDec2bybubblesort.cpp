#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="AZYZBYDXJK";
    string str=" ";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    //now bubble  sort
    int n=str.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if (s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }

    
}
