#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    for(int i=0;i<v.size();i++){//thruough this loop we will print the elements of vectors
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    //now we will sort
    sort(v.begin() , v.end());//not understanding why sort is showing error
    
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    return 0;

}