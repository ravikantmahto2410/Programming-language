#include<bits/stdc++.h>
using namespace std;

int main(){
    //this method is solved by linear search
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=3;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i-1];
            break;
        }
    }
}