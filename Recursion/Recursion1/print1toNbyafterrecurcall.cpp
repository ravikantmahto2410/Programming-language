#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;//base case
    print(n-1);//call
    cout<<n<<endl;//kaaam
}
int main(){
    int n;
    cout<<"Enter N :";
    cin>>n;
    print(n);
    
}