#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of arrayy : ";
    cin>>n;
    int arr[n];
    //take input
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];

    }
    int x;
    cout<<"Enter the element you want to search " ;
    cin>>x;

    //search
    for(int idx=0;idx<=n-1;idx++){
        if(arr[idx]==x){
            cout<<" Present "<<endl;
        }
    }
    return 0;
}