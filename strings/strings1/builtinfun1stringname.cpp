#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="raghav garg is at PW";
    cout<<str.size();//note this will not count the '\0' character  so size will be 20. Also in place of size we can use length 
}