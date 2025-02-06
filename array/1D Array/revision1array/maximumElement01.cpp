#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,3,4,96,68,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;// INT_MIN is any smallest value we are assigninig for now
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
}