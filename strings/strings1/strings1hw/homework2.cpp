#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;

    int i=0;
    while(s[i]!='\0'){
        if(i%2==0){
            s[i]='a';
        }
        i++;
    }
    cout<<s;
    return 0;
}