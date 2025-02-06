#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the No of columns : ";
    cin>>n;

    int a[m][n];
    int b[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }

    }cout<<endl;

    //addition
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]+=b[i][j];
        }
    }
    //printing 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}          