#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // bubble sort
    for(int i=0;i<n-1;i++){ //n-1 passes
        //traverse
        bool flag = true;
        for(int j=n-1;j>=1+i;j--){
            if(arr[j] > arr[j-1]){//swap
                swap(arr[j],arr[j-1]);
                flag = false;
            }
        }
        if (flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

}