#include<iostream>
#include<vector>
using namespace std;
void change (int a[]){//here we may give or not give size inside[] in 1D array fun but in 2D array row size and column size is must otherwise it will not run
    a[0]=9;
}
int main(){
    int a[3]={1,2,3};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    return 0;
}