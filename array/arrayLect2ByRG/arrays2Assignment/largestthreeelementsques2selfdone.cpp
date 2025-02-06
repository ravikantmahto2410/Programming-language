#include<iostream>
#include<vector>
using namespace std;
//this code is written by me fully but it is not running  
void display(vector<int>&a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i];
    }
    cout<<endl;
}
    int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    int max;
    //now find the largest number in the array
    for(int i=0;i<v.size()-1;i++){
        for(int j=1;j<v.size()-1;j++){
            if(v[i]>v[j]){
                max=v[i];
            }
            
        }
    }
    cout<<max;
    //now we have to find the second largest number in the array
    int smax;
    for(int i=0;i<v.size()-1;i++){
        for(int j=1;j<v.size()-1;i++){
            if(v[j]!=max&& v[j]>v[i]){
                smax=v[j];
            }
        }
    }
    cout<<smax; 
    
     int tmax;
    for(int i=0;i<v.size()-1;i++){
        for(int k=1;k<=v.size()-1;k++){
            if(v[k]!=max && v[k]!=smax && v[k]>  max && v[k]>smax){
                tmax=v[k];
                } 
            }

        }
    cout<<tmax;
    
    
    
    return 0;
}