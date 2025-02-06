#include<iostream>
using namespace std;

int count_set_bits_2(int n){
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));//we are using & operater because it will eliminate the one setbit of flipped part in each iteration 
    }
    return count;
}
int main(){
    cout<<count_set_bits_2(13)<<endl;
    return 0;
}