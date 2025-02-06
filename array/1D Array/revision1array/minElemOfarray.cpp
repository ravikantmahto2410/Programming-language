#include<iostream>
#include<climits>
using namespace std;
int main(){
    //in this code we will find the minimum element of the array
    int arr[] = {4,7,8,94,1,-1};
    int n =sizeof(arr)/sizeof(arr[0]);

    int min = INT_MAX;//here we can also use int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<min<<endl;
}