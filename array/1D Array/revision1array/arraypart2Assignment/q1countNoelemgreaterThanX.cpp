#include<iostream>
using namespace std;
int main(){
    int arr[]={7,8,9,5,4,3,6,1,15,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    int firstmax = arr[0];
    int secMax, thirdMax;


    for(int i=1;i<n;i++){
        if(arr[i]>target){ 
            firstmax = arr[i];
        }
        
        
    }
    cout<<firstmax<<" "<<secMax<<" "<<thirdMax<<" ";

}