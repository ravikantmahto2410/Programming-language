#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>&arr1 , vector<int>&arr2){//since we are giving vector as return type so we are not passing one more vector
 int n=arr1.size();
 int m=arr2.size();
 vector<int> res(m+n);
int i=0;//for arr1
int j=0;//for arr2
int k=0;//for res

while(i<=n-1 && j<=m-1){
    if(arr1[i]<arr2[j]){
        res[k]=arr1[i];
        i++;
        k++;
    }
    else{//arr2[j]<arr1[i]
        res[k]=arr2[j];
        j++;
        k++;
    }
    //k++
    //here we can also put k++ instead of  writing at twao places i.e is at, if as well as at, else 
     //for remaining 
     if(i==n){// means arr1 ke saare elements utha chuka hoon 
        while(j<=m-1){
            res[k]=arr2[j];
            k++;
            j++;
        }
     }
     if(j==m){//aisa bhi ho sakta hai ki arr2 ke saare elements ko utha chuke hain
     while(i<=n-1){
        res[k]=arr1[i];
        k++;
        i++;
     }

   }
}

return res;
}
//in function the return type can be a vector, array instead of void ,float 
int main(){
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<"  ";
    }
    cout<<" ";


    vector<int>arr2;

    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<"  ";
    }
    cout<<endl;

    vector<int>v=merge(arr1,arr2);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
        return 0;
    
}