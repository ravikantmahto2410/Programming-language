#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    // ans[] = {-4 -4 -7 -9 -9 -9 -9 0 -1}
    vector<int>ans;
    queue<int>q;
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);

    } 
    int i=0;
    while(i<n-k){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    // printing the original array
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}