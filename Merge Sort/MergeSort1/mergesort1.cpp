#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++] = a[i++];
        }
        else res[k++] = b[j++];
    }
    if(i==a.size()){
        while (j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}
void mergesort(vector<int>&v){
    int n = v.size();
    if(n==1) return;// this is base case
    int n1 = n/2,n2 = n - n/2;// dividing in n/2 and n-n/2 because the size is odd
    vector<int>a(n1),b(n2); //vector  a with size n1, and vector b with size b;// here 2 vector ek sath declare kiye hua hai
    // copy pasting starting ke 3 elements a mein daalunga and baad ke elements b mein daalunga
    for(int i=0;i<n1;i++){
        a[i]=v[i];    
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }
    //magic aka recursion
    mergesort(a);
    mergesort(b);
    //merge
    merge(a,b,v);//This v jo line 25 mein pass hua hai in line 25 the v was not sorted but here the v is sorted
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n); //same as arr,copy in form of vector , and in vector we dont have to pass their size in the function
    for(int i=0;i<v.size();i++){// this Will print Normal Vector
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int i=0;i<v.size();i++){// This Will print The final after sorting the vector
        cout<<v[i]<<" ";
    }
}