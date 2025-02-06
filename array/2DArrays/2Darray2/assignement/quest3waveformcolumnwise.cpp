#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //now printing the code in the wave form
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}