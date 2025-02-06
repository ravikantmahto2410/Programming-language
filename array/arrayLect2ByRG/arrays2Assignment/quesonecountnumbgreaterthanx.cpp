#include<iostream>
#include<vector>
using namespace std;
//this code is coded by me myself and it is running quite effective
int main(){
    int x;
    cout<<"Enter the target number : ";
    cin>>x;
    vector<int>v;

    int n;
    cout<<"enter the array size : ";
    cin>>n;

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    int count=0;

    for(int i=0;i<=v.size()-1;i++){
        if(v[i]>x){
            count++;

        }
    }
    cout<<count;
    return 0;

    

}
