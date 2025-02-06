#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,5,6,8,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;


    bool flag = false;
    for(int i=0;i<n;i++){
       if(arr[i] == target) flag = true;       
    }

    if(flag == true){
        cout<<"Element is Present ";

    }
    else cout<<"Element is Not present ";
    
    return 0;
}