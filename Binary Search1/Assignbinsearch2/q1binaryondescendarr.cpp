#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {10,7,6,4,2,1};
    int n = 6;
    int tgt = 4;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(a[mid]==tgt){
            flag = true;
            break;
        }
        else if(a[mid] > tgt) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag==true)cout<<"Element Exists"<<endl;
    else cout<<"Element Does not exist"<<endl;
    
}