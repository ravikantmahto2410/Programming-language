#include<bits/stdc++.h>
using namespace std;

//you failed to solve this by yourself  try it once more
int main(){
    int arr[]={5,1,5,5,2,3};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //insertion sort
    for(int i=1;i<n;i++){
        int j=i;
        while( j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }    
    }
    for(int i=0;i<n;i++){
        cout<<endl<<" ";
    }
    cout<<endl;
    //storing the sorted array into an integer
    int x=0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    cout<<x<<endl;
    //for second minimum ,we need to change the sorted array
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //making second min number into integer
    int y=0;
    for(int i=0;i<n;i++){
        y*=10;
        y+=arr[i];

    }
    cout<<y<<endl;
    

    cout<<"min sum is : "<<x+y;
    return 0;
}