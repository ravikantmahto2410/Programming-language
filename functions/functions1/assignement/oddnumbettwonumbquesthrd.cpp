#include<iostream>
using namespace std;

void printOdds(int a , int b){
    if(a>b){
        swap(a,b);//here we are swapping the numbers as a may be greater than b
}
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return;
}
int main(){
    int a,b;
    cin>>a>>b;

    printOdds(a,b);
    return 0;
}