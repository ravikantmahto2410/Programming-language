#include<iostream>
using namespace std;

int main(){
    int marks[6];
    //taking input
    for(int i=0;i<=5;i++){
        cin>>marks[i];
        }
    //taking output
    for(int i=0;i<=5;i++){
        if(marks[i]<35){
            cout<<i<<" ";
            }
    }
    return 0;
}