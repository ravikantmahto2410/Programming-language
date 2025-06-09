#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n){
    if(n == 1) return true;

    if(n % 2 == 0){
        int quot = n / 2;
        isPowerofTwo(quot);
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    cout<<isPowerofTwo(n);
}