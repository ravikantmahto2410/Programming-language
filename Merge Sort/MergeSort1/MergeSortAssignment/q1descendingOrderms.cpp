#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int> &v){

}
int main(){
    int arr[] = {1,3,7,6,9,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr , arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}