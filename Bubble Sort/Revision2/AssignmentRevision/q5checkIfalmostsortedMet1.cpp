#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4,2,7,9,8};
    int n = 5;
    int brr[5];
    for(int i=0;i<n;i++){ // 4 2 7  9 8
        brr[i] = arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // bubble sort
    for(int i=0;i<n-1;i++){ //n-1 passes
        //traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){//swap
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if (flag==true) break; // if swap didn't happen
    }
    cout<<endl;
    for(int i=0;i<n;i++){ //  2 4 7 8 9
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag = true;
    //brr 4 2 7 9 8
    //arr 2 4 7 8 9
    for(int i=0;i<n;i++){
        if(i==0){
            if(brr[i] != arr[i] && brr[i] != arr[i+1]){
                flag = false;
                break;
            }
            
        }
        else if(i == n-1){
            if(brr[i] != arr[i] && brr[i] != arr[i-1]){
                flag = false;
                break;
            }
        }
        else{
            if(brr[i] != arr[i] && brr[i] != arr[i-1] && brr[i] != arr[i+1]){
                flag = false;
                break;
            }
            
        }
    }
    cout<<flag;
}