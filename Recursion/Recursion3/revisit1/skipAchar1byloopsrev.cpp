#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = " raviKant Mahto ";
    string s = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') s += str[i];// push back kar rhe hai , we can also use push_back function s.push_back(str[i]);
    }
    cout<<s;
}