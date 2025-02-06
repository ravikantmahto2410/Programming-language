#include<bits/stdc++.h>
using namespace std;

//very easy question still i failed to solve in first time i have to refr to solution video

int main(){
    string str;
    cin>>str;
    string  temp=str;
    reverse(temp.begin(),temp.end());
    str+=temp;
    cout<<str;

    return 0;
     


}