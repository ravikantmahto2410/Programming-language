#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i;
    for(i=0;i<n-1;i++){//to prevent run time error here we uses n-1 
        if(arr[i]>arr[i+1]){
            break;
        }
    }
    if(i==n-1){
        cout<<"The array is sorted ";
    }
    else{
        cout<<"array is unsorted ";
    }

    return 0;
}