#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of arrray : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements that you want to enter : ";
    //now we will take the input from the user 
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];

    }
    // now we will take the output;
    int result=1;
    for(int idx=0;idx<=n-1;idx++){
        result*=arr[idx];
    }
    cout<<result;
    return 0;
}