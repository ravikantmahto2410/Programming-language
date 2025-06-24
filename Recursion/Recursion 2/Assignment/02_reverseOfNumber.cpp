#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    static int ans = 0;
    if(n <= 0) return ans;

    int digit = n % 10;
    ans = ans * 10 + digit;
    reverseNum(n / 10);
}

int main(){
    
    int n = 987654;
    cout<<reverseNum(n);
}