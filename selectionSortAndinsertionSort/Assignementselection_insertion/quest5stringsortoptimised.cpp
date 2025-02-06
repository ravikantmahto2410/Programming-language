#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr[]={"raghav","urvi","harsh","vishwa","sanket","hyder","sudhanshu","raka","akash"};
    int n=9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    //bubble sort optimised
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}