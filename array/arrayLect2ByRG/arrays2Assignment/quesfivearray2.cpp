#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,8,7,6,5};
    for(int i=0;i<5;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]=2*arr[i];
        }
        cout<<arr[i]<<" ";
    }
    
    return 0;
}