#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //take the input
    cout<<"Enter the numbers : ";   
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];
    }
    int sum=0;
    //taking output
    for(int idx=0;idx<=n-1;idx++){
        sum+=arr[idx];
    }
    cout<<"The sum of array is = "<<sum;
    return 0;
}