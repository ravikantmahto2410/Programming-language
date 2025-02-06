#include<bits/stdc++.h>
using namespace std;
void printMax(int arr[],int n, int idx, int max){
    if(idx==n){    //base case starts
        cout<<max;
        return;  
    }              // base case  ends
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int main(){
    int arr[] = {2,1,6,3,9,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);
}