#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter the Number of Rows : ";
    cin>>m;
    int n;
    cout<<"Enter the Number of Columns : ";
    cin>>n;

    int arr[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];  
        }        
    }
    cout<<endl;
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }  
        }
    }
    cout<<endl;    
    cout<<"largest number is : "<<max;
    return 0;
}