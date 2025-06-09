#include<bits/stdc++.h>
using namespace std;
//Print Goodmorning 'n' number of times , where 'n' is user input
void wish (int n){
    if(n == 0) return;
    cout<<"Good Morning"<<endl;
    wish(n - 1);
}
int main(){
    int n;
    cin>>n;
    wish(n);
}