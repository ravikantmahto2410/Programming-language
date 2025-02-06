#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    //taking input of elements
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];
    }

    int min=INT_MAX;//this int max is the greaest value of  int n;
    for(int idx=0;idx<=n-1;idx++){
        if(min>arr[idx]){
            min=arr[idx];
        }
    }
    cout<<min;
    return 0;
}
