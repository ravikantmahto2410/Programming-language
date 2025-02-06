#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    //now we will take the input ;
    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];
    }
    //now we will take the output 
    int min=INT_MAX;
    for(int idx=0;idx<=n-1;idx++){
        if(min>arr[idx]){
            min=arr[idx];
        }
    }
    cout<<"The minimum value in elements is = "<<min<<endl;
    return 0;

}
