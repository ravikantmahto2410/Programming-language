#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,6,2,3,7,4};
    int n = 6;
    int i = 1;
    int j = 4;    
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
}
