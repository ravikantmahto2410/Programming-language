#include<bits/stdc++.h>
using namespace std;

int clearithBit(int n, int i){
    int leftShiftRes = ~(1 << i);
    return n & leftShiftRes;
}
int main(){
    cout<<clearithBit(13,2);
}