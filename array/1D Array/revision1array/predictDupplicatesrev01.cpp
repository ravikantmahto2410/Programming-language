#include<iostream>
using namespace std;
int main (){
    int arr[] = {1,7,4,5,7,7,5,6,5};
    int n  = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;// let us assume that there is no duplicates  present in the array
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){ 
                flag = true;
                cout<<arr[i]<<" ";
                break; 
            }      
        }
    }
    if(flag == false) cout<<"No Duplicates";
    return 0;
    

}