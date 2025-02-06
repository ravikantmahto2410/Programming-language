#include<bits/stdc++.h>
using namespace std;
//this method is not efficent dont use it any more fore efficient refer highestfrequencycharacter3.cpp
int main(){
    string s="raghav";
    int max=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==s[i]) count++;
        }
        if(max<count) max=count;
    }

    //for printing the char whose frequency is maximum we have  to apply the below loop
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int count = 1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]) count++;
        }
        if(count==max)
        cout<<ch<<" "<<max<<endl;
    }
}