#include<iostream>
using namespace std;
void printFactors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}
int main(){
   printFactors(24);
}