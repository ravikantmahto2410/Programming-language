#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //input
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];
    }
    // int max=arr[0];
    int max = INT_MIN;
    for(int idx=1;idx<n-1;idx++){
        if(max<arr[idx]){
             max=arr[idx];
             }              
    }
     cout<<max; 
    return 0;
}  