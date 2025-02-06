#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
}

int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);

    display(v1);

    vector<int>v2(v1.size());//here we are inntializing the size of v2 this is how vector size is initialized
    for(int i=0;i<v2.size();i++){
        int j=v1.size()-1-i;//we can also do the same thing without using the j simply 
                             //write v2[i]=v1.size()-1-i; 
        v2[i]=v1[j];

    }
    display(v2);
    return 0;
}