#include<iostream>
using namespace std;

int  main(){
    int x=122;
    int *p=&x;
    x=90;//here only the value gets updated ,memry adress remains the same
    cout<<*p;//this now means go 
}