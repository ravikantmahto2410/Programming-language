#include<iostream>
using namespace std;
int gcd(int a, int b){ //tc direct calculate nhi ho sakti;
    if(a==0) return b;
    else return(b%a, a);
}
int main(){
    int a = 27;
    int b = 45;
    cout<<gcd(a,b);// no need to assume that a>b or a<b  as this will be always true
}