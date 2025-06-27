#include<bits/stdc++.h>
using namespace std;

void printBits(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
void generate(int n, int arr[], int i){

    if(i == n){
        printBits(arr, n);
        return;
    }
    arr[i] = 0;
    generate(n, arr, i + 1);

    arr[i] = 1;
    generate(n, arr, i + 1);
}
int main(){
    int n = 2;
    int arr[n];
    generate(n, arr, 0);
}