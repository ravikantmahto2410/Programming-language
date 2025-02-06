#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,7,8,9,6,5,10,11,12,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>target) count++;
    }
    cout<<"The No stricty greater thanb X = "<<count;
}