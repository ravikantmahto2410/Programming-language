#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,1,3,0,4,9,6}; // pairs that will be formed in inversion (5,1),(5,3),(5,0),(5,4),(1,0),(3,0),(9,6) so the total inversion count in this case is 7
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n); //this will copy array as it is in vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]) count++;
        }
    }
    cout<<count;
}