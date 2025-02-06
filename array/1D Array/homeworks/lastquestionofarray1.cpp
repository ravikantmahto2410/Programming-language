#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    //now take the input of elements;

    for(int idx=0;idx<=n-1;idx++){
        cin>>arr[idx];
    }
   // now take output ;
   int count =0;
   int j;
   cout<<"Enter the number above wahich gretest number to be find :" ;
   cin>>n;
   for(int idx=0;idx<=n-1;idx++){
    if(arr[idx]>j){
        count++;
    }
}
         cout<<count;
         return 0;

}