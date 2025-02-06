#include<iostream>
using namespace std;
//for better code reffer solution ofthis quest i.e questsixuniquenum.cpp;

int main(){
    int arr[]={5,8,5,8,6,7,6};
    int num;
    for(int i=0;i<7;i++){
        for(int j=1;j<7;j++){
            if(arr[i]!=arr[j]){
                num=arr[i];

            }
        }
    }
    cout<<"The unique number is : "<<num;
    return 0;

    
}