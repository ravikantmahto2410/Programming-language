#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>v(5);//in this code if we dont mention the size then there will be problem or error 
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";

    }
    return 0;
}