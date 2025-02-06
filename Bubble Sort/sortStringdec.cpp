#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="AZYZXBYDXJK";
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    //sir is using builtin sort,Your HW is use bubble sort and solve it
    sort(str.begin(),str.end());
    cout<<str;
    //now your HW is to sort by using Bubble sort
}