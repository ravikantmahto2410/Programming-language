#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans[] = {9, 100, 1, 2, 102, 4, 5, 6};
    int n = sizeof(ans)/sizeof(ans[0]);

    int maxElem = INT_MIN;
    int elem = ans[0];
    for(int i = 0; i < n; i++){
        if(ans[i]  > maxElem){
            maxElem = ans[i];
        }
    }
    cout<<maxElem;
    return 0;
}