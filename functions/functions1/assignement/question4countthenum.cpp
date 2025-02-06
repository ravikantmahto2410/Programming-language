#include<iostream>
using namespace std;

int result(int n){
    int count=0;
    int n;
    int digits=0;
    for(int i=1;i<=n;i++){
        digits=i%10;
        digits++;
        n/=10;
        
        
    }
    
}

int main(){

    int n;
    cout<<"Enter the value of 10 : ";
    cin>>n;

    cout<<result(123);
    return 0;

}