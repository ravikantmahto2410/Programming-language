#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,2,3,3,4,4,4,5};
    int x = 4;
    int lo = 0;
    int hi = 7;

    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if (arr[mid]==x){
            flag = true;
            if(arr[mid+1]!=x) cout<<mid;
            break;
        }
        else if (arr[mid]<x) lo = mid + 1;
        else hi=mid-1;
    }


}