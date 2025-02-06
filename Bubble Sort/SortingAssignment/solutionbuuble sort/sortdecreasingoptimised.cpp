#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,-4,0,3,26,1,99,-80};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //buhble sort optimised
    for(int i=0;i<n-1;i++){//n-1 passess
        //traverse
        for(int j=n-1;j>=1+i;j--){
            if(arr[j]>arr[j-1]){//swwap
                swap(arr[j],arr[j-1]);
            }

        }

    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}