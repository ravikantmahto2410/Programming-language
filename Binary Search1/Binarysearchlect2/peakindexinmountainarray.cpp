#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,3,2,0};
    int n = 7;
    int lo = 0;
    int hi = n-1;
    int idx = -1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>=arr[mid+1] ){
            if(arr[mid]>arr[mid-1]){
                idx = mid;
                break;
            }
            else {
                hi = mid - 1;
            }
            

        }

    }
}