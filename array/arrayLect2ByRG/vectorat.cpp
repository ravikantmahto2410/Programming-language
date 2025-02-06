#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(7);

    v.at(2)=90;//this will update the value at index two
    cout<<v.at(2);
    return 0;
    
}