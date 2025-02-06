#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={8,4,6,2,9,6,5,1,2};
    int n=9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-1;i++){
        //traversing
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];  //dry run this code what will happen if we exchange j with j+1 and then swap
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}