#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(7);

    display(v);

    //reversing
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        //swapv[i] and v[j];
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);

}