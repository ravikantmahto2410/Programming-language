#include<bits/stdc++.h>
using namespace std;
//tc=O(sqrt n)
void printFactors(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
}
int main(){
   printFactors(60);
}