#include<iostream>
#include<vector>
using namespace std;

int main(){
    //this is the method of forward loop 
    //another method that is by applying the reverse loop we can solve this which is better alternative
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(2);
    int x=6;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            idx=i;
        }
       
    }
     cout<<idx;
    return 0;

}
