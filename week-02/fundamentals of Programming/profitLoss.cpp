#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Cost Price : ";
    int cp;
    cin>>cp;

    cout<<"Enter the Selling Price : ";
    int sp;
    cin>>sp;

    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    // else{
    //     cout<<"Loss" ;
    // }
    if(cp>sp){
        cout<<"loss = "<<cp-sp;
    }
    if(sp==cp){
        cout<<"No profit, No Loss";
    }
}