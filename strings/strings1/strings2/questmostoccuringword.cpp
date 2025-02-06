#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline (cin,s);
    stringstream ss(s);

    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    //now counting the occurence of word
    int maxcount =1;
    int count=1;

    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count=1;
        maxcount=max(maxcount,count);//this line is similar to if(max<count) max=count;
    }
    //to print the word also that which word is coming maximum
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount;
        }
    }

    return 0;
}