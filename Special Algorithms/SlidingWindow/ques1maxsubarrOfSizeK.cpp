#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = -1; //this will tell whether which window we are selecting
    for(int i=0;i<=n-k;i++){           // total no of op = n-k+1
        int sum = 0;
        for(int j=i;j<i+k;j++){            //k times
            sum += arr[j];
        }
        if(maxSum<sum){
            maxSum = sum;
            maxIdx = i;
        }
    }
    //to
    cout<<maxSum<<endl;
    cout<<maxIdx;
}