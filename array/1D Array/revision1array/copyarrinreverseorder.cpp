#include<iostream>
#include<vector>;
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(6);
    a.push_back(2);
    a.push_back(3);
    a.push_back(7);
    a.push_back(4);

    display(a);
    
    vector<int>v2(a.size());
    for(int i=0;i<v2.size();i++){
        
        int j = a.size() - 1 - i;
        v2[i] = a[j];
    }
    display (v2);
}