#include<iostream>
using namespace std;
int sum2(int n){
    if(n==0) return 0;
    return n + sum2(n-1);
}
int main(){
    //sum1toN(0,6)
    cout<<sum2(20);
}