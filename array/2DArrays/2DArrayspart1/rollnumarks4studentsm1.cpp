#include<iostream>
using namespace std;
int main(){
    // this is solved by RG sir
    //roll number,marks
    //4 students
    int arr[2][4];//we can alse represent this array as int arr[4][2];
    for(int i=0;i<=1;i++){
        for( int j=0;j<=3;j++){
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<=1;i++){
        for(int j=0;j<=3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}