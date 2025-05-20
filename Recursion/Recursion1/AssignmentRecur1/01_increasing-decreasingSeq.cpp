#include<bits/stdc++.h>
using namespace std;
void printInDec(int n, int i){
    if(i > n) return; //base case

    cout<<i<<" ";
    printInDec(n, i + 1);
    
    if(i > 1) cout<< i - 1<<" ";

}
int main(){
    int n;
    cin>>n;

    int i = 1;
    printInDec(n, i);
}