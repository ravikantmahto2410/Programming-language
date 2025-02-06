#include<iostream>
#include<vector>
using namespace std;
void sortTwopass(vector<int>&v){
    int noz=0;
    int noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else{
            noo++;
        }
    }
   //filling the elements or overwriting
    for(int i=0;i<v.size();i++){
        if(i<noz){
            v[i]=0;
        }
        else{ 
            v[i]=1;
        }
    }
    return;     
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortTwopass(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}