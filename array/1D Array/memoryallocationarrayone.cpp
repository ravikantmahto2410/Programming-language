#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<&arr<<endl;//this will print the address of the arr
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    return 0;
}