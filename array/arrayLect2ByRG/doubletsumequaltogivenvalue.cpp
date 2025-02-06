#include<iostream>
#include<vector>

using namespace std;
//this code is self codede but it is not correct
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(8);
    v.push_back(7);
    v.push_back(1);

    int x=10;
    int sum=0;
    int idx=-1;
    int idx2=-2;
    for(int i=0;i<=v.size();i++){
        for(int j=i+1;i<=v.size();i++){
            if(v[i]+v[j]==x){
                idx=i;
                idx2=j;

            }
        }
    }
    cout<<idx<<endl;
    cout<<idx2<<endl;

    return 0;
}