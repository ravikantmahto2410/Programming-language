#include<bits/stdc++.h>
using namespace std;

void printBits(int ans[], int n){
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
        
    }
    cout<<endl;
}

void generateStrings(int n,int ans[],int idx){

    if(idx == n){
        printBits(ans, n);
        return;
    }

    ans[idx] = 0;
    generateStrings(n, ans, idx + 1);

    ans[idx] = 1;
    generateStrings(n, ans, idx + 1);

}
int main(){
    int n = 3;
    int ans[n];
    generateStrings(n,ans,0);
}