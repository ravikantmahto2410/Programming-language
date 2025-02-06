#include<bits/stdc++.h>
using namespace std;

int main(){
    //using stoi that is string to integer inbuilt function

    string str="123456789";//note this stoi inbuilt fun store only upto 9 places
    int x=stoi(str);
    cout<<x+1;
    return 0;
}