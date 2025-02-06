#include<iostream>
using namespace std;
void printSum(int a, int b, int &sum){
    //base case 
    if(a>b) return;
    if(a==b){
        if(a%2 != 0) sum += a;
        return;
    }
    //kaam
    if(a%2 != 0){//odd
        sum += a;
        printSum(a+2, b, sum);
    }
    else{//even
        printSum(a+1, b, sum);
    }
}
int main(){
    int a;
    cout<<"Enter the a : ";
    cin>>a;
    int b;
    cout<<"Enter the b : ";
    cin>>b;
    
    if(a>b) swap(a,b);
    int sum = 0;
    printSum(a , b , sum);
    
    cout<<sum<<endl;
}