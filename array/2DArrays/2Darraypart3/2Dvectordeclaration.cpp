#include<iostream>
#include<vector>
using namespace std;

int main(){
    //suppose we have to make vector similar to int arr[3][4];
    vector<vector<int> >v(3,vector<int>(4,2));

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;//this will print the no of rows in 2D vector
    cout<<v[0].size();//this will print the no of columns in 2D vector

}