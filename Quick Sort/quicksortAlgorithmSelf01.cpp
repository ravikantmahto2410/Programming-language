#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[si];
    int count = 0;
    for(int i=si+1;i<ei;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);

    //Now the next Task is to check whether the elements on the left side of pivotelement is less than and element on the right side  of the pivotelement is greater than or not ;

    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
}
void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pivotIdx = partition(arr,si,ei);
    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ei);
}
int main(){
    int arr[]={4,5,6,3,2,5,7,82,14};
    int n=sizeof(arr)/sizeof((arr[0]));
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}