#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int num){
    string res = "";

    while(num > 0){
        if(num % 2 == 0){
            res = "0" + res;
        }
        else{
            res = "1" + res;
        }
        num /= 2;
    }
    return res;
}
int main(){
    int num = 13;
    cout<<decimal_to_binary(num);
}