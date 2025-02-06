#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Integer";
    int n;
    cin>>n;
    //this is method two of this  absolute integer problem
    if(n<0){
        n = -n;
    }
    cout<<n;

}