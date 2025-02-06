#include<bits/stdc++.h>
using namespace std;
int count_set_bits(int n){
    return __builtin_popcount(n);
}
int main(){
    // method -01 by using inbuilt c++ function __builtin_popcount(number);
    cout<<count_set_bits(5)<<" "<<endl;
    return 0;
     
}