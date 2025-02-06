#include<iostream>
using namespace std;
//this is code written by me which is incorrect
void oddNumbers(int a , int b){
    for (int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i;
        }      
    }
    return ;

}

int main(){
    int result =0;
         result=oddNumbers(1,2);

    return 0;
   

}