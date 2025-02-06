#include<bits/stdc++.h>
using namespace std;
int mazetwo(int sr,int sc){
    if(sr<1 || sc<1) return 0;
    if(sr<1 && sc==1) return 1;
    int rightways = mazetwo(sr,sc-1);
    int downways = mazetwo(sr-1,sc);
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    cout<<"No of ways  = "<<mazetwo(3,4);
}