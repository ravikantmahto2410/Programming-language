#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);

    vector<int>copyArr(v.size());

    int j = v.size() - 1;
    int i = 0;

    while(i < v.size()){
        copyArr[i] = v[j];
        j--;
        i++;
        
    }
    for(int i=0; i<v.size(); i++){
        cout<<copyArr[i]<<" ";
    }
    return 0;
}