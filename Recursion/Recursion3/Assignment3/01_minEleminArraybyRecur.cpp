#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[], int idx, int n, int currMin){
    if(idx == n){
        return currMin;
    }
    currMin = min(currMin, arr[idx]);
    findMin(arr, idx+1, n, currMin);
}
int main(){
    int arr[4] = {2,3,1,0-1};
    int n = 4;
    int currMin = INT_MAX;
    cout<<findMin(arr, 0, n, currMin);

}