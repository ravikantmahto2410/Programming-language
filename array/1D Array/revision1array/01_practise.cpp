//Question: Find the second largest element in the given array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,5,18,19,15,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int currMax = INT_MIN;
    int secMax = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > currMax){
            secMax = currMax;
            currMax = arr[i];
        }
    }
    cout<<"Highest Maximum Value : "<<currMax<<endl;
    cout<<"Second Highest Value :"<<secMax<<endl;
}