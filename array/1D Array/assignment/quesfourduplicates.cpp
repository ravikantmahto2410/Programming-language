#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //now we will take input of elements;
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];

    }
    //now we will take the output
    bool flag=false;
    for(int idx=0;idx<=n-1;idx++){
        for(int j=idx+1;j<=n-1;j++){
        if(arr[idx]==arr[j]){
            if(flag=true)
            cout<<"  "<<arr[idx];
            break;
}
            }
    }
    
    
    if (flag==false){
        cout<<"No duplicate : ";
    return 0;
    
    }
    }