#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n){
    if(n==3) return 4;
    if(n==2) return 2;
    if(n==1) return 1;
    return numberOfWays(n-1) + numberOfWays(n-2) + numberOfWays(n-3) ;
}
int main(){
    cout<<numberOfWays(5);
}