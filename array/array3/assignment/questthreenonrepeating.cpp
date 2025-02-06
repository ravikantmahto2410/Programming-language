#include<iostream>
using namespace std;
//this code is written by me myself and it is not running  for solution refer nonrepeatingsol.cpp int this folder onnly

int nonRepeat(int arr[],int n){
    int num=0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                num=arr[i];
                

            }
        }
    }
    return num;
}                                                                                     



int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>n;
    }

    cout<<nonRepeat(arr,n);
    return 0;


}