#include<bits/stdc++.h>
using namespace std;

void printSum(int a, int b, int &sum){
    //base case
    if(a > b) return;
    if(a == b){
        if(a % 2 != 0) sum += a;
        return;
    }
    if(a % 2 != 0){ //means current value is odd
        sum += a;
        printSum(a + 2, b, sum);
    }
    else{
        printSum(a + 1, b, sum);
    }
    
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;

    int sum = 0;
    printSum(a, b, sum);

    cout<<sum;
}