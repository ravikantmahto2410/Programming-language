#include<iostream>
#include<climits>
using namespace std;
void maxThreenum(int arr[],int n){
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if (arr[i]>max3){
            max3=arr[i];
        }

    }
    if(max1==INT_MIN){
        cout<<"No maximum number : " ;
        }
        else{
        cout<<max1<<" ";
    }
    if(max2==INT_MIN){
        cout<<"No second maximum number : ";
    }
    else{
        cout<<max2<<" ";
    }
    if(max3==INT_MIN){
        cout<<"No third maximum number exist : ";
    }
    else{
        cout<<max3<<" ";
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxThreenum(arr,n);

    return 0;

}