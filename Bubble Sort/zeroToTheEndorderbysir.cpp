#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n=9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    //using bubble sort
    for(int i=0;i<n-1;i++){//n-1 passess
        //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){//swap
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
              //  we can use inbuilt function swap(arr[j],arr[j+1])  to sort ;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    
}