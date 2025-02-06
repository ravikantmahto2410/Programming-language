#include<iostream>
using namespace std;
//this code is written by raka and it is not running ,dont knowa why
int squares(int num){
    return num*num;
}

int countDigits(int n){
    int digits=0;
    while(n>0){
        digits++;
        n/=10;   
    }
    
    return digits;  
}

int main(){
    int n;
    cin>>n;
    int digicount=countDigits(n);
    cout<<squares(digicount)<<endl;

    return 0;
}   