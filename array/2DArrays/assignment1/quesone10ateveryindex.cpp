#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the No of rows : ";
    cin>>m;   
    int n;
    cout<<" enter the No columns : ";
    cin>>n;

    int arr[m][n];     
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){   
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //printing 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}