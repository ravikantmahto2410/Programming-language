#include<iostream>
#include<vector>
//this code is written by  me but not geting the desired output ;
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int>v;
    cout<<"enter the elements : ";
    for(int i=0;i<v.size()-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
        
    }
    display(v);
    int sum1=0;
    for(int i=0;i<=v.size();i++){
        if(i%2==0){
            sum1=v[i];
            sum1++;
        }
    }
    int sum2=0;
    for(int j=0;j<v.size();j++){
        if(j%2!=0){
            sum2=v[j];
            sum2++;
        }
        
    }

    int difference =sum1-sum2;
    cout<<"The difference is : " <<difference;

    return 0;

}
