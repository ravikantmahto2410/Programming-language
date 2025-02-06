#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxSum = INT_MIN;
    int maxIdx = 0; //this will tell whether which window we are selecting
    int prevSum = 0;
    for(int i=0;i<k;i++){ // by this first window ka sum nikal ke aa jaayega
        prevSum += arr[i];
    }
    maxSum = prevSum;    // because kya pata first window hi hamara maxSum ho jaaye
    int i = 1;
    int j = k;
    //sliding window algrothim
    while(j<n){    // no of op = n-k;
        prevSum = prevSum + arr[j] - arr[i-1];
        if(maxSum<prevSum){
            maxSum = prevSum;
            maxIdx = i; 
        }
        i++;
        j++;
    }
    //tc = O(n);
    cout<<maxSum<<endl;
    cout<<maxIdx;


}