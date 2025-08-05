#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';//  current character ya toh character mein 1 ya character mein 0, and two ki power mein multiplication karne ke liye number mein convert karna padega
        result = result + num*(1 << (n-i-1));//<< indicates left shift
    }
    return result;
}
int main(){
    string str = "001101";
    cout<<binary_to_decimal(str)<<endl;
    return 0;

}