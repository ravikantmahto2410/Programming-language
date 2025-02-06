#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,5,18,19,15,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    int secMax = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            secMax = max;
            max = arr[i];
        }
        else if(secMax<arr[i] && max != arr[i]){
            secMax = arr[i];
        }
    }
    if(secMax==INT_MIN){
        cout<<"No second Largest Element Exist"<<endl;
    }
    else cout<<secMax<<endl;
}