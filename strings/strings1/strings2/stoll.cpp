#include<bits/stdc++.h>
using namespace std;

int main(){
    //stoll stand for string to long long and it is used to convert  string having more than 9 place values to integer
    string s="123456789456123";
    long long x =stoll(s);
    cout<<x;
    return 0;
}