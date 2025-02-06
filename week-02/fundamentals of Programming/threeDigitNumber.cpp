#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Integer";
    int n;
    cin>>n;
    if(n>=100 && n<=999){  //here && is a logical and operator and it is used when both the statements has to be true.
        cout<<"Three Digit Number";
    }
    else{
        cout<<"Not a three Digit Number ";
    }

}