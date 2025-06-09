#include<bits/stdc++.h>
using namespace std;
int pow(int x, int n){
    if(n == 1) return x;
    if( n == 0) return 1;
    long long ans = 1;
    if(n % 2 == 0){
        ans = pow(x, n/2) * pow(x, n/2);
        
    }
    else if( n % 2 != 0){
        ans = pow(x, n/2) * pow(x, n/2) * x;
    }
    return ans;
}
int main(){
    cout<<pow(2,5);
}