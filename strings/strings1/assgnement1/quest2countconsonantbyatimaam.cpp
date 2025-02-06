#include<bits/stdc++.h>
using namespace std;
// my code and ma'am code is almost same
int main(){
    int n;
    cin>>n;
 
    string s;
    cin>>s;

    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='U'){
            count++;

        }
    }
    cout<<count<<endl;
}