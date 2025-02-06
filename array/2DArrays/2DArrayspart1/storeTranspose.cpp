#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the No of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the No of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    } 
    cout<<endl;
    //printing array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    
    }
    cout<<endl;
    //store the transpose
    int trans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=arr[j][i];
        }
    }
    //printting the transpose of the matrix 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}