#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(i%2!=0){
            arr[i]*=2;
        }
        else{
            arr[i]+=10;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<"  ";

    } 
    return 0;       
}