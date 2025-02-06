#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u' ){
            cout<<s[i]<<endl;
        }
        else{
            count++;
        }
    }
    cout<<"No of consonants is : "<<count<<endl;
}