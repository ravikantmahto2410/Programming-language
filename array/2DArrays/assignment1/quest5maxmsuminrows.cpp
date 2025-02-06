#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter the No of Rows : ";
    cin>>m;
    int n;
    cout<<"Enter the No of Columnns : ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int index=-1;
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];

        }
        if(max<sum){//in case of two row having the same maximum value .to get the first maxm sum row dont put equal in if condition or in order to get the other row number having the same maxm sum put equality 
            max=sum;
            index=i;
        }
    }
    cout<<"The row having the maximum sum : "<<index+1;
    return 0;
}

    