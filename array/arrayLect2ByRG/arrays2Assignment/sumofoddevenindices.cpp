#include<iostream>
using namespace std;

int main(){
    int sum1=0;
    int sum2=0;

    int arr[]={ 0,8,7,6,5};
    for(int i=0;i<5;i++){
        if(i%2==0){
            sum1+=arr[i];
        }
        else{
            sum2+=arr[i];
        }
    }
    cout<<"The difference is : "<<sum1-sum2;
    return 0;
}