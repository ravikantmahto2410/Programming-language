#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 5, 18, 18, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int firstMaxElem = INT_MIN;
    int secMaxElem = INT_MIN;

    for(int i = 0;i < n; i++){
        if(arr[i] >= firstMaxElem){
            secMaxElem = firstMaxElem;
            firstMaxElem = arr[i];
            
        }

        else if(arr[i] > secMaxElem){
            secMaxElem = arr[i];
        }
    }
    cout<<"FirstMaxElem = "<<firstMaxElem<<endl;
    cout<<"secMaxElem = "<<secMaxElem<<endl;
}