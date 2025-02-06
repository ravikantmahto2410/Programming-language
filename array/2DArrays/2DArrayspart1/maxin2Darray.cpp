#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"enter the  no of columns : ";
    cin>>n;
    
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //now finding the maximum values;
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<max;
    return 0; 
}