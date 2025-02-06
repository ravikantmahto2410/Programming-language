#include<iostream>
using namespace std;

int main(){
    int arr[]={4,2,6,1,7};
    int*ptr=arr;//giving address;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;//this will again point to the first element rememeber this line is must to again point to to first element
    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;// ptr--;this will again point to the first element rememeber this line is must to again point to to first element
    //        now we  can again use for loop 
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;//ptr is pointing to first element
    }
