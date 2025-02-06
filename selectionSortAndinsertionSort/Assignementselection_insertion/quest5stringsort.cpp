#include<bits/stdc++.h>
using namespace std;


//code is copied  from solution becausea you failed to solve this by ypurself
int main(){
    string arr[9]={"raghav","urvi","harsh","vishwa","sanket","hyder","sudhanshu","raka","akash"};
    int n=9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;

}