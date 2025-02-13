#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int>mpp;
    mpp[2] = 30;
    mpp[3] = 10;
    mpp[1] = 20;

    for(auto x : mpp){
        cout<<x.second<<" ";
    }
}