#include<iostream>
using namespace std;
int main(){
    // int a;
    // cin>>a;
    // int b;
    // cin>>b;

    // int sum=(a+b);
    // int*r=&sum;
    // cout<<sum;
    // return 0;

    //the above code is written by me in the first trial.

    int x=6;
    int y=7;
    int*p=&x;
    int*q=&y;
    cout<<*p+*q<<endl;//basically *p=6 and *y=7
    return 0;
}