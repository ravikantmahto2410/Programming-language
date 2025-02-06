#include<iostream>
using namespace std;
int finalDifference(int arr[],int n){
    int sumE=0;
    int sumO=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            sumE+=arr[i];
        }
        else{
            sumO+=arr[i];
        }
    }
    return sumE-sumO;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The differnce is : "<<finalDifference(arr,n);
    return 0;
    
}