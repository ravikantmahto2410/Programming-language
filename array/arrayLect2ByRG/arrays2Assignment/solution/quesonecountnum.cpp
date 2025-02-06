#include<iostream>
using namespace std;
int countGreater(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    return count;

    
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int x;
    cout<<"enter the target number : ";
    cin>>x;

    cout<<"Number of elements greater than x are : "<<countGreater(arr,n,x);

    return 0;
}