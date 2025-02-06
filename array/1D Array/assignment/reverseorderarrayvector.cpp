#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cout<<"Enter the array size : " ;
    cin>>n;

    cout<<"Enter the elements of the arrray : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=v.size()-1;i>=0;i--){
        v.push_back(i);
        cout<< v[i]<<"  ";
        
    }
    return 0;
}