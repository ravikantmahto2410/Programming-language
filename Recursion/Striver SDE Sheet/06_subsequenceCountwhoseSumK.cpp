#include<bits/stdc++.h>
using namespace std;

int printS(int ind,int s, int sum, int arr[], int n){
    
    if(s > sum) return 0; //thisbase case is applied for optimising 2^N , also this is applied only when if array contains positive values only
    if(ind == n){
        //condition satisfied
        if(s == sum){
            return 1;
        }
        //condition not satisfied
        else return 0;
    }
    s += arr[ind];

    int left = printS(ind + 1, s, sum, arr, n);
    s -= arr[ind];
   
    //not pick
    int right = printS(ind + 1, s, sum, arr, n) ;
    return left + right;
}
int main(){
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    
    cout<<printS(0, 0, sum, arr, n); //first 0 is index and second idx is initial sum
}