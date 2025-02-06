#include<iostream>
using namespace std;
void change2D(int arr[3][3] ){//here we must have to give size of both the row and column
    arr[0][0]=100;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};//here we may give size of row ,but must give the size og the column
    cout<<arr[0][0]<<endl;
    change2D(arr);
    cout<<arr[0][0]<<endl;
    return 0;
}