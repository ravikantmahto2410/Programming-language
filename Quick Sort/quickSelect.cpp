#include<iostream>
using namespace std;
//in quickSelect The Partition function will remain as it is
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
int kthSmallest(int arr[], int si, int ei,int k){// this function will just sort the array jo reference se pass ho rha hoga
     
    int pivotIdx = partition(arr,si,ei); // this pivotidx yeh nhi bata rhi  ki  abhi pivotelement idx kya hai yeh batayegi ki pivot element ki asli pivotidx kahan  jaayegi 
    //4 1 3 2 5 7 8 6
    if(pivotIdx+1==k) return arr[pivotIdx];//kyonki hum kth element yahin mil jaayega 
    else if (pivotIdx+1 < k) return kthSmallest(arr,pivotIdx+1,ei,k);// Pivotidx ke aage se call lagana hai
    else return kthSmallest(arr,si,pivotIdx-1,k);// left wala call laga do
    
    
}
int main(){
    int arr[] = {5,18,82,20,7,6,31,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
    cout<<kthSmallest(arr,0,n-1,k);

    

}