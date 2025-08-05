#include<bits/stdc++.h>
using namespace std;
int set_ith_bit(int n, int i){
    int leftShift = 1 << i;
    return leftShift | n;
}
int main(){
    int n = 13;
    int i = 2;
    cout<<set_ith_bit(n, i);
    return 0;

}