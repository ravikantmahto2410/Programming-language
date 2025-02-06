#include<iostream>
#include<vector>
using namespace std;
//good question do it once more 
// you failed to solve this question 
int main(){
    int x;
    cout<<"Enter the target : ";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"Enter the array size : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){//if we run loop upto all index then the values will get repeated
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

    return 0;
}