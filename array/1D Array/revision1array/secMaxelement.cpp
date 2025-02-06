#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,5,18,9,15,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int max = INT_MIN;
    // int secMax = INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(max<arr[i]){
    //         secMax = max;
    //         max = arr[i];
    //     }
    //     else if(secMax<arr[i]){
    //         secMax = arr[i];
    //     }
    // }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    int secMax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && secMax<arr[i]) secMax = arr[i];
    }
    cout<<max<<endl;
    cout<<secMax<<endl;
}