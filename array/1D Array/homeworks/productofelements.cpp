#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements you want to enter : ";
    //now take input for elements
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];
    }
     int result=1;
    // now taking output
    for(int idx=0;idx<=n-1;idx++){
        result*=arr[idx];
        
    }
    cout<<result<<"  ";
    return 0;

}