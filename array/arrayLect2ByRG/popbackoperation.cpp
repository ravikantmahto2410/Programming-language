#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(8);
    v.push_back(4);
    v.push_back(11);
    v.push_back(16);
    v.push_back(15);
    v.push_back(33);
    v.push_back(3);
    v.push_back(7);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}