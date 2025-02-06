#include<iostream>
using namespace std;

void printOdds(int a , int b){
    if(a>b){
        printOdds(b,a);
        }//here we are calling the function from another function i.e using recursion
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<"  ";
        }
     }    
     return ;
}

int main(){
    int a,b;
    cin>>a>>b;
    printOdds(a,b);
    return 0;
}