#include<iostream>
using namespace std;
bool isPalindrome(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1])
        return false ;
    }   
    return true;
}

int main(){
    int n;
    cout<<"Enter the size  of the array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Is the given array is palindrome ? "<<isPalindrome(arr,n)<<endl;
}