#include<iostream>
using namespace std;
//this is array method solved by ati bansal mam
int countTriplets(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;
    cout<<countTriplets(arr,n,x);

    return 0;

}


