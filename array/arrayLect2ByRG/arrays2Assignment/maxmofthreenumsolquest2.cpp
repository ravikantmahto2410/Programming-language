#include<iostream>
#include<climits>
using namespace std;
// this code is written after taking help from solution
void threeMaxnum(int a[], int n){
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;

    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max3=max2;
            max2=max1;
            max1=a[i];
        }
        else if(max2<a[i]){
            max3=max2;
            max2=a[i];
        }
        else if(max3<a[i]){
            max3=a[i];
        }

    }
    if(max1==INT_MIN){
        cout<<"No maximum number  ";
    }
    else{
        cout<<max1<<" ";
    }

    if(max2==INT_MIN){
        cout<<"No second maximum number exists ";
    }
    else{
        cout<<max2<<" ";
    }
    if(max3==INT_MIN){
        cout<<"No third maximum number exists  ";
    }
    else{
        cout<<max3<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    threeMaxnum(a, n);
    return 0;
}