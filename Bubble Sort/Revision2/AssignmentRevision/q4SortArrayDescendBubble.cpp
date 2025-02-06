#include<bits/stdc++.h>
using namespace std;
int main(){
    // // My Method (line- 4-21)
    // int arr[] = {3,5,1,4,2};
    // int n = 5;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // // Bubble Sort
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1;j++){
    //         if(arr[j] < arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[] = {5,-4,0,3,26,1,99,-80};
    int n = 8;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    // bubble sort
    for(int i=0;i<n-1;i++){ //n-1 passes
        //traverse
        for(int j=n-1;j>=1+i;j--){
            if(arr[j] > arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

    

}