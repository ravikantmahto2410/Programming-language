#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no of columns : ";
    cin>>m;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];

        }
    }
    cout<<sum;
    return 0;
}