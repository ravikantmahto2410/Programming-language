#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of array : ";
    cin>>n;

    int arr[n];
    //input;
    for(int idx=0;idx=n-1;idx++){
        cin>>arr[idx];

    }
    int max=INT_MIN;
    for(int idx=0;idx=n-1;idx++){
        if(max<arr[idx])
            max=arr[idx];
            
    } 
    int smax=INT_MIN;
    for(int idx=0;idx=n-1;idx++){
        if(arr[idx]!=max && smax<arr[idx])
            smax=arr[idx];
        
    } 
    cout<<max<<endl;
    cout<<smax;
    return 0;   
}
