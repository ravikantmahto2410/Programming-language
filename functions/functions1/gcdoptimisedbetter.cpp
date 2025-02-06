#include<iostream>
using namespace std;

int gcd(int a, int b){
    int hcf=1;
     // let we are asuumng two numbers as  24,60
     //i=24,23,21,....
     for(int i=min(a,b);i>=1;i--){
        if(a%i==0&& b%i==0){
            hcf=i;
            break;
                    }
     }
     return hcf;
}

int main(){
    int a;
    cout<<"enter the first  number -";
    cin>>a;
    int b;
    cout<<"Enter the second number -";
    cin>>b;
     cout<<gcd(a,b);
     return 0;
}