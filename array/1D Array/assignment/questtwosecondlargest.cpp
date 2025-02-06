#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    //now take the input of elements
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];
    }
    //its time for taking the output
    int max=arr[0];
    for(int idx=1;idx<=n-1;idx++){
        if(max<arr[idx]){
            max=arr[idx];
        }
    }
    int smax=INT_MIN;
    for(int idx=0;idx<=n-1;idx++){
        if(arr[idx]!=max && smax<arr[idx]){
            smax=arr[idx];
        }
    }
    cout<<"Largest Element is : "<<max<<endl;
    cout<<"Second largest element is : " <<smax<<endl;
    return 0;
}