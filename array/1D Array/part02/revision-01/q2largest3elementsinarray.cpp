#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,4,5,6,7,89,6,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3 = max2;
            max2  = max1;
            max1 = arr[i]; 
            
        }
        else if(max2>arr[i]) {
            max3 = max2;
            max2 = arr[i];
        }
        else if(max3<arr[i]){
            max3 = arr[i];
        }


    }
    if(max1==INT_MIN) cout<<"No maximimum number";
    else cout<<max1<<" ";

    if(max2==INT_MIN) cout<<"No Secmaximimum number";
    else cout<<max1<<" ";

    if(max3==INT_MIN) cout<<"No Thirdmaximimum number";
    else cout<<max1<<" ";

}