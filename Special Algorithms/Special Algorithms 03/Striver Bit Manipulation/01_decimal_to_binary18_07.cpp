#include<bits/stdc++.h>
using namespace std;

string convertToBinary(int num){
    string res = "";
    while(num != 1){
        if(num % 2 == 1) res += 1;
        else res += 0;
        num = num / 2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int decNum = 13;
    cout<<convertToBinary(decNum);

}