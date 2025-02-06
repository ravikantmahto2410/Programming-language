#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an Integer : ";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"The Number Is divisible by 5 or 3 ";
    }
    else{
        cout<<"The Number is Not divisible by 5 and  it is not divisible 3 ";
    }
}