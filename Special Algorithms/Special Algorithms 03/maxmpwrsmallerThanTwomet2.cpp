#include<iostream>
using namespace std;

int max_power_of2(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
   

    return (n+1)/2;//or return (n+1)>>1;
}
int main(){
    int y = 44;
    cout<<max_power_of2(y);
    return 0;

}