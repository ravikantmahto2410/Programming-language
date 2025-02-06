#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,-4,0,3,26,1,99,-80};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort
    for(int i=0;i<n-1;i++){
        //traverse
        for(int j=n-1;j>=1;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}