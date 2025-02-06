#include<iostream>
using namespace std;
int partition (int arr[],int si, int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){// apne ko chor ke jitne bhi element hai unpe check lagana hai
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count + si;// yahan se pivot index nikal jaayega
    swap(arr[si],arr[pivotIdx]);//pivot eleemnt apne sahi index mein chala gya
    // ab kaam karna hai pivotelement se chote wale ko pivotelement se left mein rakho and pivotelement se bade wale ko pivotelement se right mein rakho
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if (arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
void quicksort(int arr[], int si, int ei){// this function will just sort the array jo reference se pass ho rha hoga
    //base case
    if(si>=ei) return;
    //5 1 8 2  7 6  3 4 
    int pivotIdx = partition(arr,si,ei); // this pivotidx yeh nhi bata rhi  ki  abhi pivotelement idx kya hai yeh batayegi ki pivot element ki asli pivotidx kahan  jaayegi 
    //4 1 3 2 5 7 8 6 
    quicksort(arr,si,pivotIdx-1);
    quicksort(arr,pivotIdx+1,ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}