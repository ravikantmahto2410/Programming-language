#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,4,7,10,12,15,18,19};
    int lo = 0;
    int hi = 1;
    int tgt = 11;
    while(a[hi]<tgt){
        lo = hi;
        hi *= 2;
    }
    cout<<lo<<" "<<hi<<endl;
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(a[mid] == tgt){
            flag = true;
            break;
        }
        else if(a[mid] > tgt){
            hi = mid - 1;
        }
        else lo = mid + 1;
        
    }
    if(flag == true){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
} 