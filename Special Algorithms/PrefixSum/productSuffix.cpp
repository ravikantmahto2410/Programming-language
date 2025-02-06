#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i] = arr[i]*arr[i+1];
        cout<<arr[i]<<" ";
    }
    
}