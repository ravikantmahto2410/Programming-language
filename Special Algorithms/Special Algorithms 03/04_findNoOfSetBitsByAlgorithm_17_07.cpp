#include<bits/stdc++.h>
using namespace std;

//brian kernigerls method
int count_set_bits(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = (n & (n-1));
    }
    return count;
}
int main(){
    cout<<count_set_bits(16)<<endl;
}