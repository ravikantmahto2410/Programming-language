#include<bits/stdc++.h>
using namespace std;

int digitsSum(int n){
    
    //Base case 
    if(n >= 0 && n <= 9) return n;
    int digits = n % 10;
    return digits + digitsSum(n / 10);
}

int main(){
    int n;
    cin>>n;

    cout<<digitsSum(n);

}