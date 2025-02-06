#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 5;
    int col = 3;
    int **arr = new int*[5];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    //de-allocate
    for(int i=0;i<row;i++){
        delete[]arr[i];
    }
    delete []arr;
}