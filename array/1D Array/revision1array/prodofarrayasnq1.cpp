#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int product = 1;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    cout<<product;
    return 0;
}
