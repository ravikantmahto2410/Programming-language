#include<bits/stdc++.h>
using namespace std;

int main(){
    //this code is not efficient
    int arr[6]={5,4,6,3,2,1};
    int n=6;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){//n-1 passess
        //traverse
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){//swap
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
              //  we can use inbuilt function swap(arr[j],arr[j+1])  to sort ;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}