#include<iostream>
#include<vector>
using namespace std;
//this is solved by taking hint from ragahv sirs two sum solution..
// this solution is very efficient
int main(){

    int x;
    cout<<"Enter the target number : ";
    cin>>x;

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>v;

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=n-3;i++){
        for(int j=i+1;j<=n-2;j++){
            for(int k=j+1;k<=n-1;k++){
                if(v[i]+v[j]+v[k]==x){
                    cout<<"("<<i<<", "<<j<<", "<<k<< ")"<<endl;
                }

            }
        }
    }

    return 0;


}